/*
 * cc4.c - fourth part of Small-C/Plus compiler
 *         routines for recursive descent
 *
 * $Id: expr.c,v 1.13 2016-03-29 13:39:44 dom Exp $
 *
 */


#include "ccdefs.h"

// TODO: Send back type
int expression(int  *con, double *val, Type **type)
{
    LVALUE lval={0};

    if (heir1(&lval)) {
        rvalue(&lval);
    }
    *con = lval.is_const;
    *val = lval.const_val;
    *type = lval.ltype;
    return lval.val_type;
}

int heir1(LVALUE* lval)
{
    char *before, *start;
    LVALUE lval2={0}, lval3={0};
    void (*oper)(LVALUE *lval) = NULL;
    void  (*doper)(LVALUE *lval) = NULL;
    void (*constoper)(LVALUE *lval, int32_t constvalue) = NULL;
    int k;

    setstage(&before, &start);
    k = plnge1(heir1a, lval);
    if (lval->is_const) {
        load_constant(lval);
    }
    doper = NULL;
    if (cmatch('=')) {
        char *start1, *before1;
        if (k == 0) {
            needlval();
            return 0;
        }
        if (lval->indirect_kind)
            smartpush(lval, before);
        setstage(&before1, &start1);
        if (heir1(&lval2))
            rvalue(&lval2);
            
        /* If it's a const, then load it with the right type */
        if ( lval2.is_const ) {
            /* This leaves the double with a count of 2 */
            if ( lval2.val_type == KIND_DOUBLE ) {
                decrement_double_ref(&lval2);
                decrement_double_ref(&lval2);
            }
            clearstage(before1, 0);
            lval2.val_type = lval->val_type;
            load_constant(&lval2);
        }


        /* Now our type checking so we can give off lots of warnings about
         * type mismatches etc..
         */
//         if (lval2.val_type == KIND_VOID && lval2.ptr_type == 0)
//             warning(W_VOID);
//         /* First operand is a pointer */
//         if (lval->ptr_type) {
//             if (lval2.ptr_type && lval->ptr_type != lval2.ptr_type && (lval2.ptr_type != KIND_VOID && lval->ptr_type != KIND_VOID)) {
// #if 0
//                 /*
//                 * Here we have a pointer mismatch, however we don't take account of
//                 * ptr2ptr, so anything involvind them will barf badly, I'm leaving
//                 * this for now, since the code is fine, but commenting out the warning
//                 * which is a bit of shame, but there you go...
//                 */
//                 warning(W_PTRTYP);
// #endif
//             } else if (!(lval2.ptr_type) && !(lval2.is_const) && lval2.ident != FUNCTION)
//                 warning(W_INTPTR);
//         } else if (lval2.ptr_type && (!(lval->ptr_type) && !(lval->is_const))) {
//             warning(W_PTRINT);
//         }

        // Check that function pointers are assigned correctly + copy the calling convention from RHS as necessary
        // if ( lval->symbol && lval->ident == POINTER && lval2.ident == FUNCTION ) {
        //     if ( lval->symbol->flags & FLOATINGDECL) {
        //         /* The function pointer was undecorated, it should take on whatever is on the RHS */
        //         lval->symbol->flags &= ~(CALLEE|SMALLC);
        //         lval->symbol->flags |= ( lval2.flags & (CALLEE|SMALLC));
        //     } else {
        //         if ( (lval->symbol->flags & CALLEE) != (lval2.flags & CALLEE)) {
        //             warning(W_CALLINGCONVENTION_MISMATCH, lval->symbol->name, "_z88dk_callee");
        //         }
        //         if ( (lval->symbol->flags & SMALLC) != (lval2.flags & SMALLC)) {
        //             warning(W_CALLINGCONVENTION_MISMATCH, lval->symbol->name, "__smallc/__stdc");
        //         }
        //     }
        // }


#ifdef SILLYWARNING
        if (((lval->flags & UNSIGNED) != (lval2.flags & UNSIGNED)) && (!(lval2.is_const) && !(lval->ptr_type) && !(lval2.ptr_type)))
            warning(W_EGSG);
#endif
        force(lval->val_type, lval2.val_type, lval->flags & UNSIGNED, lval2.flags & UNSIGNED, 0); /* 27.6.01 lval2.is_const); */
        smartstore(lval);
        return 0;
    } else if (match("|=")) {
        oper = zor;
        constoper = zor_const;
    } else if (match("^=")) {
        oper = zxor;
        constoper = zxor_const;
    } else if (match("&=")) {
        oper = zand;
        constoper = zand_const;
    } else if (match("+="))
        oper = doper = zadd;
    else if (match("-="))
        oper = doper = zsub;
    else if (match("*=")) {
        oper = doper = mult;
        constoper = mult_const;
    } else if (match("/=")) {
        oper = doper = zdiv;
        constoper = zdiv_const;
    } else if (match("%=")) {
        oper = zmod;
        constoper = zmod_const;
    } else if (match(">>=")) {
        oper = asr;
        constoper = asr_const;
    } else if (match("<<=")) {
        oper = asl;
        constoper = asl_const;
    } else 
        return k;

    /* if we get here we have an oper= */
    if (k == 0) {
        needlval();
        return 0;
    }
    lval3.symbol = lval->symbol;
    lval3.ltype = lval->ltype;
    lval3.indirect_kind = lval->indirect_kind;
    lval3.flags = lval->flags;
    lval3.val_type = lval->val_type;
    lval3.offset = lval->offset;
    /* don't clear address calc we need it on rhs */
    if (lval->indirect_kind)
        smartpush(lval, 0);
    rvalue(lval);
    if (oper == zadd || oper == zsub)
        plnge2b(heir1, lval, &lval2, oper);
    else
        plnge2a(heir1, lval, &lval2, oper, doper, constoper);

    force(lval3.val_type, lval->val_type, lval3.flags & UNSIGNED, lval->flags & UNSIGNED, lval->is_const);
    smartstore(&lval3);
    return 0;
}

/*
 * heir1a - conditional operator
 */
int heir1a(LVALUE* lval)
{
    int falselab, endlab, skiplab;
    LVALUE lval2={0};
    int k;
    int temptype;

    k = heir2a(lval);
    if (cmatch('?')) {
        /* evaluate condition expression */
        if (k)
            rvalue(lval);
        /* test condition, jump to false expression evaluation if necessary */
        if (check_lastop_was_testjump(lval)) {
            // Always evaluated as an integer, so fake it temporarily
            force(KIND_INT, lval->val_type, c_default_unsigned, lval->flags & UNSIGNED, 0);
            temptype = lval->val_type;
            lval->val_type = KIND_INT; /* Force to integer */
            testjump(lval, falselab = getlabel());
            lval->val_type = temptype;
            /* evaluate 'true' expression */
            if (heir1(&lval2))
                rvalue(&lval2);
            jump(endlab = getlabel());
            postlabel(falselab);
        } else {
/* New handling by djm 13/5/99, push flags, load true, jump on true 
 * The optimizer will with a bit of luck catch inefficient push/pop
 */
#if 1
            jumpnc(falselab = getlabel());
            if (heir1(&lval2))
                rvalue(&lval2);
            jump(endlab = getlabel());
            postlabel(falselab);
#else
            zpushflags();
            /* evaluate 'true' expression */
            if (heir1(&lval2))
                rvalue(&lval2);
            zpopflags();
            jumpc(endlab = getlabel());
#endif
        }
        needchar(':');
        /* evaluate 'false' expression */
        if (heir1(lval))
            rvalue(lval);
        /* check types of expressions and widen if necessary */
        if (lval2.val_type == KIND_DOUBLE && lval->val_type != KIND_DOUBLE) {
            convert_int_to_double(lval->val_type, lval->flags & UNSIGNED);
            postlabel(endlab);
        } else if (lval2.val_type != KIND_DOUBLE && lval->val_type == KIND_DOUBLE) {
            jump(skiplab = getlabel());
            postlabel(endlab);
            convert_int_to_double(lval2.val_type, lval2.flags & UNSIGNED);
            postlabel(skiplab);
        }
        /* 12/8/98 Mod by djm to convert long types - it's nice when someone
 * else has had to do it before! */
        else if (lval2.val_type == KIND_LONG && lval->val_type != KIND_LONG) {
            /* Check for signed, if both signed convert properly, if one/neither signed
 * then we have dodgy equating in anycase, so treat as unsigned
 */
            widenlong(&lval2, lval);
            lval->val_type = KIND_LONG;
            postlabel(endlab);
        } else if (lval2.val_type != KIND_LONG && lval->val_type == KIND_LONG) {
            jump(skiplab = getlabel());
            postlabel(endlab);
            widenlong(lval, &lval2);
            lval->val_type = KIND_LONG;
            postlabel(skiplab);
        } else
            postlabel(endlab);
        /* result cannot be a constant, even if second expression is */
        lval->is_const = 0;
        return 0;
    } else
        return k;
}

int heir2a(LVALUE* lval)
{
    return skim("||", eq0, jumpc, 1, 0, heir2b, lval);
}

int heir2b(LVALUE* lval)
{
    return skim("&&", testjump, jumpnc, 0, 1, heir2, lval);
}

int heir234(LVALUE* lval, int (*heir)(LVALUE *lval), char opch, void (*oper)(LVALUE *lval), void (*constoper)(LVALUE *lval, int32_t value))
{
    LVALUE lval2={0};
    int k;

    k = plnge1(heir, lval);
    blanks();
    if ((ch() != opch) || (nch() == '=') || (nch() == opch))
        return k;
    if (k)
        rvalue(lval);
    while (1) {
        if ((ch() == opch) && (nch() != '=') && (nch() != opch)) {
            inbyte();
            plnge2a(heir, lval, &lval2, oper, NULL, constoper);
        } else
            return 0;
    }
}

int heir2(LVALUE* lval)
{
    return heir234(lval, heir3, '|', zor, zor_const);
}

int heir3(LVALUE* lval)
{
    return heir234(lval, heir4, '^', zxor, zxor_const);
}

int heir4(LVALUE* lval)
{
    return heir234(lval, heir5, '&', zand, zand_const);
}

int heir5(LVALUE* lval)
{
    LVALUE lval2={0};
    int k;

    k = plnge1(heir6, lval);
    blanks();
    if ((streq(line + lptr, "==") == 0) && (streq(line + lptr, "!=") == 0))
        return k;
    if (k)
        rvalue(lval);
    while (1) {
        if (match("==")) {
            plnge2a(heir6, lval, &lval2, zeq, zeq, NULL);
        } else if (match("!=")) {
            plnge2a(heir6, lval, &lval2, zne, zne, NULL);
        } else
            return 0;
    }
}

int heir6(LVALUE* lval)
{
    LVALUE lval2={0};
    int k;

    k = plnge1(heir7, lval);
    blanks();
    if (ch() != '<' && ch() != '>' && (streq(line + lptr, "<=") == 0) && (streq(line + lptr, ">=") == 0))
        return k;
    if (streq(line + lptr, ">>"))
        return k;
    if (streq(line + lptr, "<<"))
        return k;
    if (k)
        rvalue(lval);
    while (1) {
        if (match("<=")) {
            plnge2a(heir7, lval, &lval2, zle, zle, NULL);
        } else if (match(">=")) {
            plnge2a(heir7, lval, &lval2, zge, zge, NULL);
        } else if (ch() == '<' && nch() != '<') {
            inbyte();
            plnge2a(heir7, lval, &lval2, zlt, zlt, NULL);
        } else if (ch() == '>' && nch() != '>') {
            inbyte();
            plnge2a(heir7, lval, &lval2, zgt, zgt, NULL);
        } else
            return 0;
    }
}

int heir7(LVALUE* lval)
{
    LVALUE lval2={0};
    int k;

    k = plnge1(heir8, lval);
    blanks();
    if ((streq(line + lptr, ">>") == 0) && (streq(line + lptr, "<<") == 0))
        return k;
    if (streq(line + lptr, ">>="))
        return k;
    if (streq(line + lptr, "<<="))
        return k;
    if (k)
        rvalue(lval);
    while (1) {
        if ((streq(line + lptr, ">>") == 2) && (streq(line + lptr, ">>=") == 0)) {
            inbyte();
            inbyte();
            plnge2a(heir8, lval, &lval2, asr, NULL, asr_const);
        } else if ((streq(line + lptr, "<<") == 2) && (streq(line + lptr, "<<=") == 0)) {
            inbyte();
            inbyte();
            plnge2a(heir8, lval, &lval2, asl, NULL, asl_const);
        } else
            return 0;
    }
}

int heir8(LVALUE* lval)
{
    LVALUE lval2={0};
    int k;


    k = plnge1(heir9, lval);
    blanks();
    if (ch() != '+' && ch() != '-')
        return k;
    if (nch() == '=')
        return k;
    if (k)
        rvalue(lval);
    while (1) {
        if (cmatch('+')) {
            plnge2b(heir9, lval, &lval2, zadd);
        } else if (cmatch('-')) {
            plnge2b(heir9, lval, &lval2, zsub);
        } else
            return 0;
    }
}

int heir9(LVALUE* lval)
{
    LVALUE lval2={0};
    int k;

    k = plnge1(heira, lval);
    blanks();
    if (ch() != '*' && ch() != '/' && ch() != '%')
        return k;
    if (nch() == '=')
        return k;
    if (k)
        rvalue(lval);
    while (1) {
        if (cmatch('*')) {
            plnge2a(heira, lval, &lval2, mult, mult, mult_const);
        } else if (cmatch('/')) {
            plnge2a(heira, lval, &lval2, zdiv, zdiv, zdiv_const);
        } else if (cmatch('%')) {
            plnge2a(heira, lval, &lval2, zmod, zmod, zmod_const);
        } else
            return 0;
    }
}

/*
 * perform lval manipulation for pointer dereferencing/array subscripting
 */

SYMBOL *deref(LVALUE* lval, char isaddr)
{
    lval->ltype = lval->ltype->ptr;
    if ( lval->ltype->kind != KIND_PTR && lval->ltype->kind != KIND_CPTR ) 
        lval->ptr_type = KIND_NONE;
    else
        lval->ptr_type = lval->ltype->ptr->kind;
    lval->val_type = lval->indirect_kind = lval->ltype->kind;
        
    // flags = lval->flags;
    // if (isaddr) {
    //     if (flags & FARACC)
    //         flags |= FARACC;
    // } else {
    //     if (flags & FARPTR)
    //         flags |= FARACC;
    //     else
    //         flags &= ~FARACC;
    // }
    // if ( lval->symbol->type == KIND_PORT8 || lval->symbol->type == KIND_PORT16 ) {
    //     error(E_PORT_DEREF, lval->symbol->name);
    // }
    // /* NB it has already been determind that lval->symbol is non-zero */
    // if (lval->symbol->more == 0) {
    //     /* array of/pointer to variable */
    //     if (flags & FARPTR && lval->val_type == KIND_CPTR)
    //         flags |= FARACC;
    //     // else flags &= ~FARACC;
    //     lval->val_type = lval->indirect_kind = lval->symbol->type;
    //     lval->flags = flags;
    //     lval->symbol = NULL; /* forget symbol table entry */
    //     lval->ptr_type = KIND_NONE; /* flag as not symbol or array */
    //     lval->ident = ID_VARIABLE; /* We're now a variable! */
    // } else {
    //     /* array of/pointer to pointer */
    //     lval->symbol = dummy_sym[(int)lval->symbol->more];
    //     /* djm long pointers */
    //     lval->ptr_type = lval->symbol->type;
    //     /* 5/10/98 restored lval->val_type */
    //     lval->indirect_kind = lval->val_type = (flags & FARPTR ? KIND_CPTR : KIND_INT);
    //     if (flags & FARPTR)
    //         flags |= FARACC;
    //     lval->flags = flags;
    //     if (lval->symbol->type == KIND_STRUCT)
    //         lval->tagsym = tagtab + lval->symbol->tag_idx;
    // }
    return lval->symbol;
}

int heira(LVALUE *lval)
{
    int k, j;
    LVALUE  cast_lval={0};
    int klptr;
    int save_fps_num;

    /* Cast check, little kludge here */
    save_fps_num = buffer_fps_num;
    buffer_fps_num = 0;
    if (rcmatch('(')) {
        Type  *ctype;
        klptr = lptr;
        lptr++;
        if ( (ctype = parse_expr_type()) != NULL ) {
            needchar(')');
            for ( j = 0; j < save_fps_num; j++ ) {
                 fprintf(buffer_fps[j],"%.*s",lptr-klptr,line+klptr);
            }
            buffer_fps_num = save_fps_num;
            k = heira(lval);
            if ( k == 1 ) { // If we need to fetch then we should cast what we get 
                lval->ltype = cast_lval.cast_type;
            } else {
                if (cast_lval.cast_type ) docast(&cast_lval, lval);
            }
            return k;
        } else {
            lptr = klptr;
        }
    }
    buffer_fps_num = save_fps_num;

    if (match("++")) {
        prestep(lval, 1, inc);
        return 0;
    } else if (match("--")) {
        prestep(lval, -1, dec);
        return 0;
    } else if (cmatch('~')) {
        if (heira(lval))
            rvalue(lval);
        intcheck(lval, lval);
        com(lval);
        lval->const_val = ~(int32_t)lval->const_val;
        lval->stage_add = NULL;
        return 0;
    } else if (cmatch('!')) {
        if (heira(lval))
            rvalue(lval);
        lneg(lval);
        lval->binop = lneg;
        lval->const_val = !lval->const_val;
        lval->stage_add = NULL;
        return 0;
    } else if (cmatch('-')) {
        if (heira(lval))
            rvalue(lval);
        neg(lval);
        if ( lval->val_type == KIND_DOUBLE ) decrement_double_ref(lval);
        lval->const_val = -lval->const_val;
        if ( lval->val_type == KIND_DOUBLE ) increment_double_ref(lval);
        lval->stage_add = NULL;
        return 0;
    } else if (cmatch('*')) { /* unary * */
        if (heira(lval))
            rvalue(lval);
        if (lval->ltype->ptr == NULL ) {
            error(E_DEREF);
            junk();
            return 0;
        } else {
            deref(lval, NO);
        }
        lval->is_const = 0; /* flag as not constant */
        lval->const_val = 1; /* omit rvalue() on func call */
        lval->stage_add = 0;
        return 1; /* dereferenced pointer is lvalue */
    } else if (cmatch('&')) {
        if (heira(lval) == 0) {
            return 0;
        }

        if (lval->symbol) {
            lval->ltype = make_pointer(lval->symbol->ctype);
            lval->ptr_type = lval->symbol->type;
            lval->val_type = (lval->flags & FARACC ? KIND_CPTR : KIND_INT);
            lval->symbol->isassigned = YES;
        } else {
            warning(W_BUG1);
            warning(W_BUG2);
            lval->ptr_type = KIND_VOID;
            lval->val_type = (lval->flags & (FARACC | FARPTR)) ? KIND_CPTR : KIND_INT;
        }
        if (lval->indirect_kind)
            return 0;
        /* global & non-array */
        address(lval->symbol);
        lval->indirect_kind = lval->symbol->ctype->kind;
        return 0;
    }

    k = heirb(lval);

    if (match("++")) {
        poststep(k, lval, 1, inc, dec);
        return 0;
    } else if (match("--")) {
        poststep(k, lval, -1, dec, inc);
        return 0;
    } 
    return k;
}

int heirb(LVALUE* lval)
{
    char *before, *start;
    char *before1, *start1;
    char sname[NAMESIZE];
    double dval;
    int val, con, direct, k, valtype;
    char flags;
    SYMBOL* ptr;

    setstage(&before1, &start1);
    k = primary(lval);
    ptr = lval->symbol;
    blanks();
    if (ch() == '[' || ch() == '(' || ch() == '.' || (ch() == '-' && nch() == '>'))
        while (1) {
            if (cmatch('[')) {
                Type *type;
                
                if (k && lval->ltype->kind == KIND_PTR ) {
                    rvalue(lval);
                } else if ( lval->ltype->kind != KIND_PTR && lval->ltype->kind != KIND_ARRAY) {
                    error(E_SUBSCRIPT);
                    k = 0;
                }
                setstage(&before, &start);
                if (lval->flags & FARPTR)
                    zpushde();
                zpush();
                valtype = expression(&con, &dval, &type);
                // TODO: Check valtype
                val = dval;
                needchar(']');
                if (con) {
                    Zsp += 2; /* undo push */
                    if (lval->flags & FARPTR)
                        Zsp += 2;
                    cscale(lval->ltype, &val);
                    val += lval->offset;
                    printf("%d %d\n",val,lval->offset);
                    
                    if (ptr->storage == STKLOC && lval->ltype->kind == KIND_ARRAY) {
                        /* constant offset to array on stack */
                        /* do all offsets at compile time */
                        clearstage(before1, 0);
                        lval->offset = val;
                        getloc(ptr, val);
                    } else {
                        /* add constant offset to address in primary */
                        clearstage(before, 0);
                        //        if (lval->symbol->more)
                        //                cscale(lval->val_type,tagtab+ptr->tag_idx,&val);
                        zadd_const(lval, val);
                        lval->offset = val;
                    }
                } else {
                    /* non-constant subscript, calc at run time */
                    if (lval->symbol->more) {
                        scale(lval->val_type, tagtab + ptr->tag_idx);
                    } else {
                        scale(ptr->type, tagtab + ptr->tag_idx);
                    }
                    /* If near, then pop other side back, otherwise
                       load high reg with de and do an add  */
                    if (lval->flags & FARPTR) {
                        const2(0);
                    } else {
                        zpop();
                    }
                    zadd(lval);
                    /* If long pointer restore upper 16 bits */
                    //    if (lval->flags&FARPTR) zpop();
                }
                ptr = deref(lval, YES);
                k = 1;
            } else if (cmatch('(')) {
                if (ptr == NULL) {
                    callfunction(NULL,NULL);
                    /* Bugger knows what ya doing..stop SEGV */
                    ptr = dummy_sym[KIND_VOID];
                    warning(W_INTERNAL);
                } else if (ptr->ctype->kind != KIND_FUNC) {
                    if (k && lval->const_val == 0)
                        rvalue(lval);
                    // Functino pointer call
                    callfunction(NULL,ptr);
                } else {
                    // Normal function call
                    callfunction(ptr,NULL);
                }
                lval->flags &= ~(CALLEE|FASTCALL|SMALLC);
                k = lval->is_const = lval->const_val = 0;
                lval->ltype = lval->ltype->return_type;

                // TODO: We need to setup stuff

                if (ptr && ptr->more == 0) {
                    /* function returning variable */
                    lval->ptr_type = KIND_NONE;
                    lval->val_type = ptr->type;
                    ptr = lval->symbol = NULL;
                } else {
                    /* function returning pointer */
                    lval->flags = ptr->flags & ~(CALLEE|SMALLC|FASTCALL); /* djm */
                    ptr = lval->symbol = dummy_sym[(int)ptr->more];
                    lval->indirect_kind = lval->ptr_type = ptr->type;
                    /* djm - 24/11/98 */
                    lval->val_type = (lval->flags & FARPTR ? KIND_CPTR : KIND_INT);
                }
            }
            /* Handle structures... come in here with lval holding tehe previous
             * pointer to the struct thing..*/
            else if ((direct = cmatch('.')) || match("->")) {
                /* Check to see if we have a cast in operation, if so then change type
                 * internally, but don't generate any code */
                if (lval->ltype->tag == NULL ) {
                    error(E_MEMBER);
                    junk();
                    return 0;
                }
                if (symname(sname) == 0 || (ptr = findmemb(lval->ltype->tag, sname)) == 0) {
                    error(E_UNMEMB, sname);
                    junk();
                    return 0;
                }
                /*
                 * Here, we're trying to chase our member up, we have to be careful
                 * not to access via far methods near data..
                 */
                if (k && direct == 0)
                    rvaluest(lval);

                debug(DBG_FAR1, "prev=%s name=%s flags %d oflags %d", lval->symbol->name, ptr->name, lval->flags, lval->oflags);
                flags = ptr->flags;
                if (direct == 0) {
                    /* So, we're accessing via a pointer if we get here */
                    flags = ptr->flags;
                    if (lval->oflags & FARACC || (lval->flags & FARPTR))
                        flags |= FARACC;
                    if (flags & FARPTR || (lval->flags & FARPTR))
                        lval->oflags |= FARACC;
                }
                lval->flags = flags;

                zadd_const(lval, ptr->offset.i);
                lval->symbol = ptr;
                lval->ltype = ptr->ctype;
                lval->indirect_kind = lval->val_type = ptr->type;
                lval->ptr_type = lval->is_const = lval->const_val = 0;
                lval->stage_add = NULL;
                lval->binop = NULL;
                if (lval->ltype->kind == KIND_PTR) {
                    lval->ptr_type = ptr->ctype->ptr->kind;
                    /* djm */
                    if (ptr->flags & FARPTR) {
                        lval->indirect_kind = KIND_CPTR;
                        lval->val_type = KIND_CPTR;
                    } else {
                        lval->indirect_kind = KIND_INT;
                        lval->val_type = KIND_INT;
                    }
                }
                if (lval->ltype->kind == KIND_ARRAY || lval->ltype->kind == KIND_STRUCT ) {
                    /* array or struct */
                    lval->ptr_type = ptr->type;
                    /* djm Long pointers here? */

                    lval->val_type = ((ptr->flags & FARPTR) ? KIND_CPTR : KIND_INT);
                    k = 0;
                } else
                    k = 1;
            } else
                return k;
        }
    if (ptr && ptr->ident == FUNCTION) {
        address(ptr);
        lval->symbol = NULL;  // TODO: Can we actually set it correctly here? - Needed for verification of func ptr arguments
        lval->flags = ptr->flags;
        return 0;
    }
    return k;
}
