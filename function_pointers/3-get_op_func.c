#include <string.h>
#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - returns the op function for the s
 * @s: an operand from +, -, *, /, *
 *
 * Return: the function for operand s or NULL on error
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < (int) (sizeof(ops) / sizeof(*ops)))
	{
		if (ops[i].op == NULL || strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
