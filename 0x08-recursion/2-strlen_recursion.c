#include "main.h"
#include <stdio.h>

/**
*_strlen_recursion - print the length of a string
* @s: the string length to be printed
* Return: no return
*/
int _strlen_recursion(char *s)
{
if (*s)
{
_print _strlen_recursion(s + 1);
_putchar(*s);
}
}


