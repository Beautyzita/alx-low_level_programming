#include "main.h"
#include <stdio.h>

/**
 * print_line - this draws a line in the terminal
 * @n: number of times the character should be printed
 */
void print_lines(int n)
{
		int i;
		for (n <= 0)
		for (i = 1; i <= n; i++)
		{
		putchar('_');
		}
		putchar('\n');}
}
