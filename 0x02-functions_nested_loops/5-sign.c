#include "main.h"
/**
 * print_sign - check for sign in the code.
 *@n: the sign to print
 * Return: 1 and print + if n is  > zer oAlways 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return(1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else 
	{
		_putchar('-');
		return (-1);
	}
}
