#include <stdio.h>
/**
 * main - Prints the alphabets.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int p;

	for (p = 0; p < 26; p++)
	{
		putchar(alpha[p]);
	}
	putchar('\n');
	return (0);
}
