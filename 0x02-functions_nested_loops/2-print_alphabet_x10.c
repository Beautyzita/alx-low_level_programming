#include "main.h"

/**
 * print_alphabet_x10 - this is to print 10 times the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int num = 0;
	char c = 'a';

	while (num <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	_putchar(c);
	_putchar('\n');
	num++;
	}
}

