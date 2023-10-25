#include "main.h"

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to be written.
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
