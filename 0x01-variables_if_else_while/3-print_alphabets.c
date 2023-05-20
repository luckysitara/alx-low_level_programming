#include <stdio.h>
/**
 * main - Prints the alphabets.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int y;

	for (y = 0; y < 52; y++)
	{
		putchar(alp[y]);
	}
	putchar('\n');
	return (0);
}
