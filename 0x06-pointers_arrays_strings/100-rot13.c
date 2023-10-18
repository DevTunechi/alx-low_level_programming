#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher
 * @str: The input string
 *
 * Description: Encodes the input string using the ROT13 algorithm, where
 * each letter is replaced by the letter 13 positions down the alphabet
 * Non-alphabetic characters remain unchanged
 *
 * Return: A pointer to the modified string
 */

char *rot13(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
char is_alpha = (*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z');

if (is_alpha)
{
char is_uppercase = (*ptr >= 'A' && *ptr <= 'Z');
char base = is_uppercase ? 'A' : 'a';
*ptr = ((*ptr - base + 13) % 26) + base;
}

ptr++;
}
return (str);
}
