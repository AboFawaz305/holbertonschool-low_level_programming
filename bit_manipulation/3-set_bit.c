/**
 * set_bit - set the bit at position index in n to 1
 * @n: an integer
 * @index: the index of the bit to set
 *
 * Return: 1 on success or -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
