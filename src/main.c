/*
This program tests the function print_bits();
A struct of datatypes varying in sizes will be pass to print_bits()
*/


#include "bitprint.h"


/* datatypes of varying sizes */
struct datatypes 
{
	char a;
	short int b;
	int c;
	long int d;
	float e;
	double f;
	long double g;
	void* h;
}; /* struct test */



int main()
{
	unsigned int third_byte, num_bytes; 

	struct datatypes testing = 
	{
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		(void*)1
	};

	num_bytes = print_bits(&testing, sizeof(testing));
	third_byte = fetch_byte(&testing, 2);

	printf("print_bits() printed %u bytes.\n", num_bytes);
	printf("The third byte from %p is 0x%02x.\n", (void*)&testing, third_byte);

	return 0;
} /*main()*/
