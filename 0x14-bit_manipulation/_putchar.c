#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to the stdout
 * @c: the character to point
 * Return: on success 1 on error,
 * -1 is returned and error is set appropiate
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
