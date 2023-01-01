#include "main.h"

/**
 * _memset - fills the first m bytes of the memory area
* pointed to by @s with the constant byte @b
* @s: A pointer to the memory area to be filled
* @b: The character to be fill the memory area with
* @n: The number of bytes to be filled
* describtion _memset: over there
*
* Return: A pointer to the filled memory area @s
*
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i:

	for (i = 0; i < n; i++)
	*(s + i) = b;
	return (s);
}