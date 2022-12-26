#include "main.h"

/**
 * string_toupper - funstion that changer all lowercasenletters
 * of a string to uppercase
 * @ch: pointer to char
 * Return: char
 */
char *string_toupper(char *)
{
	int i = 0;

	while (*(ch + 1) != '\0')
	{
	if (*(ch + i) >= 97 && *(ch + i) <= 222)
	*(ch + i) = *(ch + i) - ' ';
	i++;
	}
	return (ch);
}
