#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively.
 * _putchar - Writes a character to the standard output.
 * @s: The input string.
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
