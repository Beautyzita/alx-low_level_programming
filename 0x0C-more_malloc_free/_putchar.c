#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - write the character c to stdout
 * @c: character to print
 * Return: on success 1, on Error -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
