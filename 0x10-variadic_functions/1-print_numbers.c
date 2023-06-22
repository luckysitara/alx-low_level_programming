#include "variadic_functions.h"

/**
 *  print_numbers -  prints numbers sepereated by seperator
 *
 *  @seperator: String beetween numbers
 *
 *  @n: Number of args
 *
 *  Return void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int a;

	va_start(ap, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(ap, unsigned int));

		if (seperator != NULL && a < n - 1)
		{
			printf("%s", seperator);
		}
	}
	putchar('\n');

	va_end(ap);
}
