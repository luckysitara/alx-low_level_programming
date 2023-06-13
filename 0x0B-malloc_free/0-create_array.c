#include "main.h"
/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int a;

	arr = malloc(sizeof(char) * size);
	if(size == 0 || arr == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		arr[a] = c;
	return (arr);
}
