/*
	Z88DK - Rabbit Control Module examples

	Example I/O lib to use shadow registers in a unified way,
	in due time this should go into the rcmx000 library!

*/

#include "iolib.h"

static int iolib_has_inited=0;

static /* const */ unsigned char address_table[]={
  0x30, /* PADR     */
  0x70, /* PEDR     */
  0x77, /* PEDDR    */
  0x24, /* SPCR     */
  0x48, /* PGDR     */
  0x4c, /* PGCR     */
  0x4d, /* PGFR     */
  0x4e, /* PGDCR    */
  0x4f, /* PGDDR    */
  0x2   /* RTC0R    */
  };


static unsigned char shadow_value[]={
  0,     /* PADR    xxxxxxxx */
  0,     /* PEDR    xxxxxxxx */
  0,     /* PEDDR   00000000 */
  0,     /* SPCR    xxxxxxxx */
  0,     /* PGDR    xxxxxxxx */
  0,     /* PGCR    xx00xx00 */
  0,     /* PGFR    xxxxxxxx */
  0,     /* PGDCR   xxxxxxxx */
  0,     /* PGDDR   00000000 */
  0      /* RTC0R   xxxxxxxx */
};



static unsigned ioi_data;
static unsigned ioi_addr;


extern unsigned iolib_physical(unsigned register)
{
  return address_table[register];
}


static void ioi_inb_impl()
{
#asm
  push hl;
  push af;

  ld hl,(_ioi_addr);
  defb 0d3h ; ioi ;
  ld a,(hl);
  ld (_ioi_data),a;

  pop af ;
  pop hl ;
#endasm
}
 
unsigned char iolib_inb(unsigned register)
{
  ioi_addr=iolib_physical(register);
  ioi_inb_impl();
  return ioi_data;
}
  
static void ioi_outb_impl()
{
#asm
  push hl ;
  push af ;
  
  ld hl,(_ioi_addr);
  ld a,(_ioi_data);

  defb 0d3h; ioi ;
  ld (hl),a ;
  
  pop af ;
  pop hl ;
#endasm
}

void iolib_outb(unsigned register, unsigned char data)
{
  ioi_addr=iolib_physical(register);
  ioi_data=data;
  ioi_outb_impl();
}

void iolib_setbit(unsigned addr, unsigned char bit, unsigned char val)
{
  
}

unsigned char iolib_getbit(unsigned addr, unsigned char bit)
{
  return 0;
}

