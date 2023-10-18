#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Description: Capitalizes the first letter of each word in the input string.
 * Words are separated by space, tabulation, new line, comma, semicolon, period
 * exclamation mark, question mark, double quote, opening parenthesis,
 * closing parenthesis, and opening curly brace, and closing curly brace.
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
int capitalize_next = 1;
char *ptr = str;

while (*ptr != '\0')
{
if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
*ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' ||
*ptr == '?' || *ptr == '"' || *ptr == '(' || *ptr == ')' ||
*ptr == '{' || *ptr == '}') {
capitalize_next = 1;
}
else if (capitalize_next && *ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - ('a' - 'A');
capitalize_next = 0;
}
else
{
capitalize_next = 0;
}

ptr++;
}

return (str);
}
