#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - this is the function that prints alphabets x10
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int i;
char letter = 'a';
for (i = 0; i < 10; i++)
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar("letter\n");
}
_putchar('\n');
}

