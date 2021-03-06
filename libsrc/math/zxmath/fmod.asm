;
;
;       ZX Maths Routines
;
;       9/12/02 - Stefano Bodrato
;
;       $Id: fmod.asm,v 1.5 2016-06-22 19:59:18 dom Exp $
;


;double fmod(n,m)
;Number in FA..


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
                PUBLIC    fmod

                EXTERN	fsetup
                EXTERN	stkequ

.fmod
        call    fsetup
	defb	ZXFP_N_MOD_M
	defb	ZXFP_END_CALC
        jp      stkequ

