/*
 *      Small C+ TCP Stack
 *
 *      Definitions for TCP Socket
 *
 *      djm 24/4/99
 *
 *	$Id: tcpsock.h,v 1.3 2001-08-09 17:48:25 dom Exp $
 */


#ifndef _NET_TCPSOCK_H
#define _NET_TCPSOCK_H

#include <net/inet.h>

/* UDP Socket */

#define UDPSOCKET struct udpsocket

UDPSOCKET {
        UDPSOCKET *next;
        u8_t      ip_type;
	pid_t	  pid;		/* Future... */
        u8_t      *errmsg;

	u8_t	  handlertype;	/* Internal/Package */
        int (*datahandler)();
	u32_t	  timeout;
        ipaddr_t  myaddr;
        tcpport_t myport;
        ipaddr_t  hisaddr;
        tcpport_t hisport;
	u8_t	  tos;
	u8_t	  ttl;
        u16_t     recvsize;
        u8_t      *recvbuff;
	u16_t	  recvoffs;    /* How much in buffer */
	u16_t	  recvread;	/* How much read from buffer */
        u8_t      *user;       /* Some user pointers for us.. */
        u8_t      sockmode;     /* bit 0 set = ascii unset = binary */
};

#define UDPMODE_ASC     1
#define UDPMODE_CKSUM   2


/* TCP Socket */

#define TCPSOCKET struct socket
#define tcp_MAXDATA 512


TCPSOCKET {
        TCPSOCKET  *next;
        u8_t    ip_type;        /* TCP/UDP */
	pid_t	pid;		/* Future */
        u8_t    *errmsg;        /* Set on close etc */

	u8_t	handlertype;	/* Internal/package */
        int(*datahandler)();
	u32_t	timeout;
        ipaddr_t   myaddr;
        tcpport_t  myport;
        ipaddr_t   hisaddr;
        tcpport_t  hisport;
	u8_t	  tos;
	u8_t	  ttl;
/* receive buffer stuff - this is handled via pointers because not
 * everything needs a recv buffer - only true apps, size can be
 * adjusted upwards...
 */
        i16_t   recvsize;        /* Size of recv buffer */
        u8_t    *recvbuff;
        i16_t   recvoffs;        /* how much in buffer */
        i16_t   recvread;        /* how much read from buffer */
        
        u8_t    *appptr;        /* Used by application */
        u8_t    state;

        u32_t      acknum;
        u32_t      seqnum;
        i16_t   unacked;        /* Amount of unacked data */
        u8_t    unhappy;
        u8_t    flags;
        u8_t    recent;         /* Set if recently retransmitted */
        u16_t    window;         /* His window */
/* Van Jacobson's algorithm */
        u8_t    cwindow;
        u8_t    wwindow;
        u16_t    vj_sa;
        u16_t    vj_sd;
        u16_t    vj_last;
        u16_t    rto;
        u8_t    karn_count;
/* Retransmission timeout procedure - in clock ticks */
        u32_t    rtt_lasttran;   /* Last transmission time */
/*        u32_t    rtt_smooth; */    /* Smoothed round trip time */
/*        u32_t    rtt_delay;  */    /* Delay for next transmission */
        u32_t    rtt_time;       /* Time for next transmission */

        u16_t    mss;
       u32_t    inactive_to; 

/*
 * send buffer stuff, handling via pointers as well, we set the size
 * at the start, can resize upwards if we want, but we don't adjust
 * the size at all
 */
        u8_t    *sendbuff;      /* Where the buffer is */
        i16_t   sendsize;       /* Size of send buffer */
        i16_t   sendoffs;       /* Offset in buffer */
};
    

/* TCP flags */

#define tcp_flagFIN     0x01
#define tcp_flagSYN     0x02
#define tcp_flagRST     0x04
#define tcp_flagPUSH    0x08
#define tcp_flagACK     0x10
#define tcp_flagURG     0x20



/*
 * TCP states, from tcp manual.
 * Note: close-wait state is bypassed by automatically closing a connection
 *       when a FIN is received.  This is easy to undo.
 */
#define tcp_stateLISTEN  0      /* listening for connection */
#define tcp_stateSYNSENT 1      /* syn sent, active open */
#define tcp_stateSYNREC  2      /* syn received, synack+syn sent. */
#define tcp_stateESTAB   3      /* established */
#define tcp_stateESTCL   4
#define tcp_stateFINWT1  5      /* sent FIN */
#define tcp_stateFINWT2  6      /* sent FIN, received FINACK */
#define tcp_stateCLOSEWT 7
#define tcp_stateCLOSING 8      /* sent FIN, received FIN (waiting for FINACK) */
#define tcp_stateLASTACK 9      /* fin received, finack+fin sent */
#define tcp_stateTIMEWT  10      /* dally after sending final FINACK */
#define tcp_stateCLOSEMSL 11
#define tcp_stateCLOSED  12      /* finack received */




#endif /* _NET_TCPSOCK_H */
