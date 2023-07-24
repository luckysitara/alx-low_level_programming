#include "main.h"
/**
 * get_endianness - Check the endianess
 *
 * Return: void
 */

int get_endianness(void)
{
	int iindex;

	iindex = 2;

	if (iindex & 1)
	{
		return (0);
	}

	return (1);
}
