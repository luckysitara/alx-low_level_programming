#include "main.h"

/**
 *_isalpha - check whether a char is alpha
 *@c: is the char to be checked.
 * Return: 1 if char is alpha, else Always 0.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'Z') || (c >= 'A' && c <= 'Z'));
}
