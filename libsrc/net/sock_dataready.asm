;
;	This file is automatically generated
;
;	Do not edit!!!
;
;	djm 12/2/2000
;
;	ZSock Lib function: sock_dataready


	XLIB	sock_dataready

	LIB	no_zsock

	INCLUDE	"#packages.def"
	INCLUDE	"#zsock.def"

.sock_dataready
	ld	a,r_sock_dataready
	call_pkg(tcp_all)
	ret	nc
; We failed..are we installed?
	cp	rc_pnf
	scf		;signal error
	ret	nz	;Internal error
	call_pkg(tcp_ayt)
	jr	nc,sock_dataready
	jp	no_zsock
