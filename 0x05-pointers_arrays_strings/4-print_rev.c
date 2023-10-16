#include "main.h"

/**
 *
 * _putchar - Writes a character to stdout
 * @c: The character to write
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string to be printed
 */

int _putchar(char c);
void print_rev(char *s)

{
int length = 0;
char *temp = s;

while (*temp != '\0')
{
length++;
temp++;
}

while (length > 0)
{
length--;
_putchar(s[length]);
}
_putchar('\n');
}
