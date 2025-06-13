/**
 * count_bits - count the 1 bits inside an integer
 * @n: an integer
 *
 * Return: the number of 1 bits inside n
 */
unsigned int count_bits(unsigned long n)
{
	if (n == 0)
		return (0);
	return ((0x01 & n) + count_bits(n >> 1));
}

/**
 * flip_bits - return the number of different bits between m and n
 * @n: an integer
 * @m: an interger
 *
 * Return: the number of different bits between m and n
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_bits(n ^ m));
}
