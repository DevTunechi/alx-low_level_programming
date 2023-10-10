#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - this is the fucntion that prints alphabets
 * Return: Always 0.
 */

void print_alphabet(void)
{
char letter = 'a';
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
