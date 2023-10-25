#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
int length = 0;
int i, j;

while (s[length] != '\0')
{
length++;
}

for (i = 0, j = length - 1; i < j; i++, j--)
{
if (s[i] != s[j])
{
return (0);
}
}

return (1);
}
