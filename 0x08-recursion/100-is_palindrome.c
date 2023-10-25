#include "main.h"

int is_palindrome_recursive(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}

return (is_palindrome_recursive(s, 0, length - 1));
}

/**
 * is_palindrome_recursive - Function to check if a string is palindrome
 * @s: The input string.
 * @start: The starting index of the substring.
 * @end: The ending index of the substring.
 *
 * Return: 1 if the substring start to end is a palindrome, else 0.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}

if (s[start] != s[end])
{
return (0);
}
return (is_palindrome_recursive(s, start + 1, end - 1));
}
