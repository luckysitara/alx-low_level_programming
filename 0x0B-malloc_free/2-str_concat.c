#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
    char *concat_str;
    int len1 = 0, len2 = 0, a, b;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate the length of s1 */
    while (s1[len1] != '0')
        len1++;

    /* Calculate the length of s2 */
    while (s2[len2] != '0')
        len2++;

    /* Allocate memory for the concatenated string */
    concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
    if (concat_str == NULL)
        return (NULL);

    /* Copy s1 to the beginning of the concatenated string */
    for (a = 0; a < len1; a++)
        concat_str[a] = s1[a];

    /* Copy s2 to the end of the concatenated string */
    for (b = 0; b < len2; b++)
        concat_str[a + b] = s2[b];

    /* Add the null terminator to the end of the concatenated string */
    concat_str[a + b] = '0';

    return (concat_str);
}
