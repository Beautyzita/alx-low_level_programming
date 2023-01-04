#include "main.h"
#include <stdio.h>

/**
*_strlen_recursion - print the length of a string
* @s: the string length to be printed
* Return: length of a string
*/
int _strlen_recursion(char *s)
{
if (*s)
{
	return (1 + _strlen_recursion(s + 1));
}
	else
{
	return (0);
}
}


