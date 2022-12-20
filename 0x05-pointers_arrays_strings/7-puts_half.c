#include "main.h"
#include <stdio.h>

/**
 * puts_half - the function prints a half a string
 * @str: this is the character of the printer
 * Return: the value of the character
 */
void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
	k = (j - 1) / 2;
	k += 1;
}
	else
{
	k = j / 2;
}
	for (; k < j; k++)
{
	putchar(str[k]);
}
	putchar('\n');
}
