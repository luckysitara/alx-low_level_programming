#include "variadic_functions.h"

/**
 *  print_all - Prints anything
 *
 *  @format: List of args passed to function
 *
 *  Return: void
 */

void print_all(const char * const format, ...)
{
	char *str;
	unsigned int a = 0, commaCheck = 0;
	va_list ap;

	va_start(ap, format);

	while (format && format[a])
	{
		if (commaCheck)
			printf(", ");

		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char*);
			if (str)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		default:
			commaCheck = 0;
			a++;
			continue;
		}
		commaCheck = 1,	a++;
	}
	putchar('\n');
	va_end(ap);
}
