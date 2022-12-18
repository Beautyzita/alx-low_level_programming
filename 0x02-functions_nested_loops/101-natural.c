#include "main.h"
#include <stdio.h>

/**
 * main - This is to find multiples of 3 and 5 that are below 1024
 * @i: the integer in the question
 * Return: return the value of the integer
 */
int main(int i)
{
	for (i = 0; i <= 1024; i++)
	{
		if (i % 15 == 0)
		{
			printf("%d\n", i);
		}
		else if (i % 5 == 0)
		{
			printf("%d\n", i);
		}
		else if (i % 3 == 0)
		{
			printf("%d\n", i);
		}
		printf("%d\n", i);
	}
}
