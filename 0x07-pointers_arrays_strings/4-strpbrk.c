#include "main.h"

/**
*_strpbrk - seaches a string for any of a set of bytes
* @s: first string
* @accept: second string
* Return: a pointer to the bytes in s that matches one of the
* bytes in accept. or NILL if no such bytes is found
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (i = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i == *(accept + j))
				return (s + i);
	}
	}
}
