#include <inttypes.h>

/**
 * get_endianness - get the endiannes of the system
 *
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	union
	{
		uint32_t i;
		char c[4];
	} bits = {0x01020304};

	return (bits.c[0] != 1);
}
