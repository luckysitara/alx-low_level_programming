#include "main.h"
/**
 * get_bit - Get value of a bit at a given index
 *
 * @n: long int
 *
 * @index: unsigned int
 *
 * Return: Bit at index
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ms = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	ms <<= index;

	if (ms & n)
		return (1);
	else
		return (0);
}
