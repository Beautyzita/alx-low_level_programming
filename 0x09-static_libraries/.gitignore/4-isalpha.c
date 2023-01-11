#include "main.h"

/**
 *_isalpha - this check for alphabets in lowercase or uppercase
 * @c: is the integer in the question
 *Return: 1 if letter is lowercase or uppercase alphabet 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
}
	else
	return (0);
}
