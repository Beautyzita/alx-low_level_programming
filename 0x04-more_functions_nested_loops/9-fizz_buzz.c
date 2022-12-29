#include "main.h"
#include <stdio.h>

/**
 * main - print the number from 1 to 100 followed by a new line
 * but for the multiplication of 3 prints fizz instead of the number
 * and for the multiplication of 5 print buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 3 != 0)
	{
	printf("fizz");
	}
	else if (i % 5 == 0 && i % 3 != 0)
	{
	printf("buzz");
	}
	else if (i % 3 == 0 && i % 5 == 0)
	{
	printf("fizzbuzz");
	}
	else if (i == 1)
	{
	printf("%d", i);
	}
	else
	{
	printf("%d", i);
	}
	}
	printf('\n');
	return (0);
}
