#include "3-calc.h"
/**
 * op_add - return the sum of 2 numbers
 * @a: integer
 * @b: integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns difference of 2 numbers
 * @a: integer
 * @b: integer
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns product of the numbers
 * @a: integer
 * @b: integer
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the quotient of 2 numbers
 * @a: integer
 * @b: integer
 * Return: quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns the reminder of division
 * @a: integer
 * @b: integer
 * Return: reminder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
