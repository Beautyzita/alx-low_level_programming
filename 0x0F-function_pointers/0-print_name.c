#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prina a name
 * @name: pointer to name
 * @f: function point
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)

	f(name);
}
