/**
 * _sqrt_recursion_helper - a helper function for _sqrt_recursion
 * @n: the number to find its natural square root
 * @c: the number to start searching from
 *
 * Description: this function searches for the natural square root of n, and
 * starts searching from c
 * Return: the natural square root of n or -1 if it does not exist
 */
int _sqrt_recursion_helper(int n, int c)
{
	if ((c * c) == n)
		return (c);
	if ((c * c) > n)
		return (-1);
	return (_sqrt_recursion_helper(n, c + 1));
}

/**
 * _sqrt_recursion - the natural square root of n or -1 if it does not exist
 * @n: the number to obtain its square root
 *
 * Return: the natural square root of n or -1 if it does not exist
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1));
}
