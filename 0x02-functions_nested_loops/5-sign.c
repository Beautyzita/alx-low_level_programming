#include "main.h"

/**
 * print_sign - this is to print sign of a number
* @n: the number to be checked
 * Return: 1  and print + if n is greater than zero
 * 0 print 0 if the number is zero
 * -1 print - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
{
	_putchar('+');
	return (1);
}
	if (n == 0)
{
	_putchar('0');
	return (0);
	}
	else
{
	_putchar('-');
	return (-1);
}
}
