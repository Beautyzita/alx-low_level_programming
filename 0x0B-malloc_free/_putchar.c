#include <stdio.h>
#include "main.h"

/**
 * _putchar - write the character c to stdiout
 * @c: character to print
 * Return: On success 1
 * On error, -1 is returned, and error is set appopraite
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
