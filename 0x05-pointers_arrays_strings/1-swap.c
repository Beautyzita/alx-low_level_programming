#include "main.h"

/**
 *  swap_int -  this function is to swap value of int a and b
 *  @a: is the first integer
 *  @b: this is the second integer
 *  Return: this is to return the value of the integer
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
