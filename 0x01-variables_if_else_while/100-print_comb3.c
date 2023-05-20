#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int p, o;

	for (p = 48; p <= 56; p++)
	{
		for (o = 49; o <= 57; o++)
		{
			if (o > p)
			{
				putchar(p);
				putchar(o);
				if (p != 56 || o != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
