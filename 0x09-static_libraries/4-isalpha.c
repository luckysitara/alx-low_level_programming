#include "main.h"

/**
 *_isalpha - check whether a char is alpha
 *@c: is the char to be checked.
 * Return: 1 if char is alpha, else Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
