;
;	This file is automatically generated
;
;	Do not edit!!!
;
;	djm 12/2/2000
;
;	ZSock Lib function: sock_opened


	XLIB	sock_opened

	LIB	no_zsock

	INCLUDE	"#packages.def"
	INCLUDE	"#zsock.def"

.sock_opened
	ld	a,r_sock_opened
	call_pkg(tcp_all)
	ret	nc
; We failed..are we installed?
	cp	rc_pnf
	scf		;signal error
	ret	nz	;Internal error
	call_pkg(tcp_ayt)
	jr	nc,sock_opened
	jp	no_zsock
