bitprint
========

Raw bit printing and fetching functions


print_bits(...)
---------------

### DESCRIPTION:
	Prints raw bits from IN_PTR for IN_BYTES.
	Returns number of bytes printed.

### APPLICATION NOTES:
	IN_BYTES is often the size of IN_PTR in bytes.
	This is useful for debugging and learning your architecture.
	Check bitprint.h for printing options.
	This function is unsafe. (raw bits and "safe code" don't belong together) 



fetch_byte(...)
---------------

### DESCRIPTION:
	Returns a single byte from IN_PTR plus BYTE_OFFSET.

### APPLICATION NOTES:
	This make getting specific bytes a bit easier.
	This is useful for when the system does not support printing.
	This function is unsafe. (raw bits and "safe code" don't belong together) 
