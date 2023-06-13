#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 * was available or if str is NULL
 */
char *_strdup(char *str)
{
	char *new_str;

	int a, b = 0;

	/* Check if str is NULL */
	if (str == NULL)
        return (NULL);

	a = 0;
	while (str[a] != '\0')
		a++;

	/* Allocate memory for the new string */
	new_str = malloc(sizeof(char) * (a + 1));

	/* Check if memory allocation was successful */
	if (new_str == NULL)
	return (NULL);

	for (b = 0; str[b]; b++)
		new_str[b] = str[b];
	/* Return the pointer to the new string */
	return (new_str);
}
