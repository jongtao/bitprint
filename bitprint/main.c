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
	struct datatypes testing = 
	{
		'A',
		69,
		1234567,
		7654321,
		3.14159,
		6.0222+23,
		2.99e+8,
		0
	};

	unsigned int third_byte, num_bytes; 

	num_bytes = print_bits(&testing, sizeof(testing));
	third_byte = fetch_byte(&testing, 2);

	printf("print_bits() printed %u bytes.\n", num_bytes);
	printf("The third byte from %p is 0x%x.\n", (void*)&testing, third_byte);

	return 0;
} /*main()*/
