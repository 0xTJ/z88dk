;
;	This file is automatically generated
;
;	Do not edit!!!
;
;	djm 12/2/2000
;
;	ZSock Lib function: sock_chktimeout


	XLIB	sock_chktimeout

	LIB	no_zsock

	INCLUDE	"#packages.def"
	INCLUDE	"#zsock.def"

.sock_chktimeout
	ld	a,r_sock_chktimeout
	call_pkg(tcp_all)
	ret	nc
; We failed..are we installed?
	cp	rc_pnf
	scf		;signal error
	ret	nz	;Internal error
	call_pkg(tcp_ayt)
	jr	nc,sock_chktimeout
	jp	no_zsock
