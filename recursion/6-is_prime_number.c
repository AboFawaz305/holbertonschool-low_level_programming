/**
 * _is_prime_number - a helper function for is_prime_number
 * @n: the number to test its primality
 * @s: the number to start testing from
 *
 * Return: whether n is prime or not
 */
int _is_prime_number(int n, int s)
{
	if (s == (n / 2))
		return (1);
	if ((n % s) == 0)
		return (0);
	return (_is_prime_number(n, s + 1));
}

/**
 * is_prime_number - returns 1 if n is prime and 0 otherwise
 * @n: the number to test its primality
 *
 * Return: returns 1 if n is prime and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (_is_prime_number(n, 2));
}
