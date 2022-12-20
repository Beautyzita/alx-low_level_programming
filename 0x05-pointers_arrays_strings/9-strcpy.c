#include "main.h"
#include <stdio.h>

/**
 * _strcpy - this copies the pointer to be src including the terminating null
 * @dest: this is the destination value
 * @src: source value
 * Return: it is expected to return the string copied
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\n';
	return (dest);
}
