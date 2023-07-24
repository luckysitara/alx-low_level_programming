#include "main.h"
/**
 * binary_to_uint - Converts binary to unsigned int
 *
 * @b: Pointer to string of chars
 *
 * Return: Converted number
 */

unsigned int binary_to_uint(const char *b)
{
	signed int index = 0, number = 0;


	if (!b)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}

		number <<= 1;

		if (b[index] & 1)
		{
			number += 1;
		}
		index += 1;
	}
	return (number);
}
