/**
 * rev_string - reverse the given string
 * @s: the start address of the string
 */
void rev_string(char *s)
{
	int i = 0, j = 0, size = 0;
	char temp;

	while (s[i++])
		size++;
	while (j < size--)
	{
		temp = s[j];
		s[j] = s[size];
		s[size] = temp;
		j++;
	}
}
