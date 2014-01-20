/*
NAME:
	print_bits(...)

DESCRIPTION:
	Prints raw bits from IN_PTR for IN_BYTES.
	Returns number of bytes printed.

APPLICATION NOTES:
	IN_BYTES is often the size of IN_PTR in bytes.
	This is useful for debugging and learning your architecture.
	Check bitprint.h for printing options.
	This function is unsafe. (raw bits and "safe code" don't belong together) 
*/



/*
NAME:
	fetch_byte(...)

DESCRIPTION:
	Returns a single byte from IN_PTR plus BYTE_OFFSET.

APPLICATION NOTES:
	This makes getting specific bytes a bit easier.
	This is useful for when the system does not support printing.
	This function is unsafe. (raw bits and "safe code" don't belong together) 
*/



#include "bitprint.h"



unsigned int print_bits(void* in_ptr, unsigned int in_bytes)
{
	/*width in bytes (varies with architecture)*/
	unsigned int total_width = sizeof(char*);
	unsigned int i, j;
	char compare;

	printf("Pointer size: %d bits\nPrinting from %p for %u bytes:\n\n",
		total_width * 8, in_ptr, in_bytes);

	for(i = 0; i < in_bytes; i++)
	{

		if(!(i && i%total_width))
			printf("%d:\t", i); /*print byte number*/

		if(!HEX_MODE)
		{
			compare = (char)0x80;

			for(j = 0; (j < 8) && !HEX_MODE; j++)
			{
				if(*(char*)in_ptr & compare) /*pull out bits one by one from left*/
					putchar(ONE);
				else
					putchar(ZERO);

				compare = (compare >> 1) & 0x7F; /*get rid of sign extension*/
			} /* for each bit in a byte*/
		}/* if binary mode*/
		else
			printf("%02x", (unsigned int)*(char*)in_ptr & 0xFF);

		(i+1)%total_width ? putchar(SPACER): putchar('\n');
		in_ptr = (char*)in_ptr + 1;
	} /* for in_bytes*/

	putchar('\n');
	return in_bytes;
} /* print_bits()*/



unsigned int fetch_byte(void* in_ptr, unsigned int byte_offset)
{
	in_ptr = (char*)in_ptr + byte_offset;
	return (unsigned int)*(char*)in_ptr;
} /* print_byte()*/
