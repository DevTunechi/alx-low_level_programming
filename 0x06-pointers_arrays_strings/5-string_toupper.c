#include "main.h"

/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @str: The input string.
 *
 * Description: Iterates through the input string and converts all lowercase
 * letters to uppercase. Modifies the original string in place.
 * Return: A pointer to the modified string.
 */

char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - ('a' - 'A');
}
ptr++;
}
return (str);
}
