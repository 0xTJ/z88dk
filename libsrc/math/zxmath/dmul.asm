;
;
;       ZX Maths Routines
;
;       8/12/02 - Stefano Bodrato
;
;       $Id: dmul.asm,v 1.5 2016-06-22 19:59:18 dom Exp $
;


IF FORzx
		INCLUDE  "arch/zx/def/zxfp.def"
ENDIF
IF FORzx81
		INCLUDE  "arch/zx81/def/81fp.def"
ENDIF
IF FORlambda
		INCLUDE  "arch/lambda/def/lambdafp.def"
ENDIF

                SECTION  code_fp
                PUBLIC    dmul

                EXTERN	fsetup
                EXTERN	stkequ

.dmul
        call    fsetup
IF FORlambda
	defb	ZXFP_MULTIPLY + 128
ELSE
	defb	ZXFP_MULTIPLY
	defb	ZXFP_END_CALC
ENDIF
        jp      stkequ
