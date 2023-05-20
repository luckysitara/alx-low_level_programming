#include <stdio.h>

#define alp_size 26

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 97; i < 123; i++)
    {
        putchar(i);
    }
    putchar('n');
    return (0);
}

