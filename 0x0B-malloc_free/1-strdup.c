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

    /* Check if str is NULL */
    if (str == NULL)
        return (NULL);

    /* Allocate memory for the new string */
    new_str = malloc(sizeof(char) * (strlen(str) + 1));

    /* Check if memory allocation was successful */
    if (new_str == NULL)
        return (NULL);

    /* Copy the string to the newly allocated memory */
    strcpy(new_str, str);

    /* Return the pointer to the new string */
    return (new_str);
}
