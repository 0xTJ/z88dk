include(__link__.m4)

#ifndef _ARPA_INET_H
#define _ARPA_INET_H

#include <intrinsic.h>
#include <netinet/in.h>

#define htonl(a) intrinsic_swap_endian_32(a)
#define htons(a) intrinsic_swap_endian_16(a)
#define ntohl(a) intrinsic_swap_endian_32(a)
#define ntohs(a) intrinsic_swap_endian_16(a)

#endif
