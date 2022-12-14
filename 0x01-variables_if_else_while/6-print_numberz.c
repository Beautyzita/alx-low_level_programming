#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = '0';


	if (c < '10')
{
	putchar(c);
	c++;
}
putchar('\n');
return (0);
}
