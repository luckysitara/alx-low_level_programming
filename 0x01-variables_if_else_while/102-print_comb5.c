#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q, r;

	for (q = 0; q < 100; q++)
	{
		for (r = 0; r < 100; r++)
		{
			if (q < r)
			{
				putchar((q / 10) + 48);
				putchar((q % 10) + 48);
				putchar(' ');
				putchar((r / 10) + 48);
				putchar((r % 10) + 48);
				if (q != 98 || r != 99)
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
