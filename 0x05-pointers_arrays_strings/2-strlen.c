#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int lenstrg = 0;

	whille (*s != '\0')
	{
		lenstrg++;
		s++;
	}
	return (lensstrg);
}
