#include <unistd.h>

/**
 * get_bit - returns the bit at the index position
 * @n: an integer
 * @index: the bit index
 *
 * Return: the bit at the position index from n or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
		return (n & 0x01);
	return (get_bit(n >> 1, index - 1));
}
