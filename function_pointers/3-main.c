#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - calc arg1 and arg2
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 on success or non 0 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;
	int (*op)(int, int);

	if (argc != 4)
	{
		puts("Error");
		return (98);
	}

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		puts("Error");
		return (99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	res = op(num1, num2);

	printf("%d\n", res);

	return (0);
}
