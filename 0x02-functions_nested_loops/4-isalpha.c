#include "main.h"

/**
 *_isalpha - check whether a char is alpha
 *@c: is the char to be checked.
 * Return: 1 if char is alpha, else Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'Z') || (c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}
