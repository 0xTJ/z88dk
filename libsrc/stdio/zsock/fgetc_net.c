/*
 *	Read a byte from the network
 *
 *	djm 25/4/2000
 */

#include <stdio.h>
#include <net/socket.h>
#include <net/misc.h>


int fgetc_net(SOCKET *s)
{
	char	pad;
	unsigned char	c;
	int	num=0;

	while (1) {
		GoTCP();
		if (sock_dataready(s) ) break;
		if (sock_closed(s) ) return_nc -1;
	}
	sock_read(s,&c,1);
	return_nc(c);
}


