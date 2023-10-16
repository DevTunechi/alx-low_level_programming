#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 *
 * _putchar - Writes a character to stdout
 *
 * @s - Character to be printed
 *
 * @s: Pointer to the string to be printed
 *
 * Return: On success 1.
 *
 * On error, -1 is returned, and errn is set appropriately.
 */

int _putchar(char s);

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
