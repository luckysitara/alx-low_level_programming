#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int mag, ct, wd;

	mag = 0;
	wd = 0;

	for (ct = 0; s[ct] != '\0'; ct++)
	{
		if (s[ct] == '')
			mag = 0;
		else if (mag == 0)
		{
			mag = 1;
			wd++;
		}
	}
