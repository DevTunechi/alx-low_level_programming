#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line recursively.
 * @s: The input string.
 * _putchar - Prints characters
 * Description: This function prints the characters of the input string
 * recursively, followed by a new line when the end of the string is reached.
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);

_puts_recursion(s + 1);
}
