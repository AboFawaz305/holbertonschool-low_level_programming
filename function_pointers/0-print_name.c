/**
 * print_name - print the name using the function given function
 * @name: the name to print
 * @f: a function used to print name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
