#include "main.h"
#include <stdio.h>

/**
 * print_numbers - this prints the numbers from 0 to 9
 * int the new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 19; i++)
	{
		putchar(i + '0');
	}
		putchar('\n');
}
