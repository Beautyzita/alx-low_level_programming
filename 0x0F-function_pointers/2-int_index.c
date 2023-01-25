#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searching for an integer
 * @array: array of integers
 * @size: number of element in array
 * @cmp: pointer to function used to compare values
 * Return: index of first element
 * _1 if no element is found or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	res = -1;
if (array && cmp)
{
	if (size <= 0)
	{
		return (res);
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				res = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (res);
			}
		}
	}
	return (res);
}