#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - this is the function that prints alphabets x10
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int i = 0;
char letter = 'a';

while (i < 10)
{
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
letter = 'a';
i++;
}
}
