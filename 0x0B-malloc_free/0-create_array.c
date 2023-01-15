#include "main.h"
#include <stdio.h>

/**
 * create_array - create array of size size and assigned char c
 * @c: char to assign
 * Describtion: create array of size size and assign char
 * @size: number elementa array
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char c) * size);
	(size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
