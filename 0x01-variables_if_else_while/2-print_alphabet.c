#include <stdio.h>

#define alp_size 26

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char alp[alp_size] = "abcdefghijklmnopqrstuvwxyz";
    int i;

    for (i = 0; i < sizeof(alp); i++)
    {
        putchar(alp[i]);
    }
    putchar('n');
    return (0);
}

