#ifndef BITPRINT_H
#define BITPRINT_H



#include <stdio.h>
/*
Solid block of 1s and 0s may be hard to read.
Change characters as needed.
*/
#define ONE '1'
#define ZERO '0'
#define HEX_MODE 1	/* 1 prints hexadecimal. 0 prints binary */
#define SPACER '\t' /* spacer between printed bytes */

unsigned int print_bits(void* in_ptr, unsigned int in_bytes);
unsigned int fetch_byte(void* in_ptr, unsigned int byte_offset);



#endif
