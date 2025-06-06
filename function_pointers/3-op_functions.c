#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - add a and b
 * @a: the first operand
 * @b: the second operand
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub a and b
 * @a: the first operand
 * @b: the second operand
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul a and b
 * @a: the first operand
 * @b: the second operand
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div a and b
 * @a: the first operand
 * @b: the second operand
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mod a and b
 * @a: the first operand
 * @b: the second operand
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}

