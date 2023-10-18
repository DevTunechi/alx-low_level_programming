#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Description: Encodes the input string based on the following replacements:
 * 'a' and 'A' with '4', 'e' and 'E' with '3', 'o' and 'O' with '0',
 * 't' and 'T' with '7', 'l' and 'L' with '1'.
 * Return: A pointer to the modified string.
 */

char *leet(char *str)

{
char leet_map[256] = {0};

for (int i = 0; i < 256; i++)
{
leet_map[i] = (char)i;
}

leet_map['a'] = '4';
leet_map['A'] = '4';
leet_map['e'] = '3';
leet_map['E'] = '3';
leet_map['o'] = '0';
leet_map['O'] = '0';
leet_map['t'] = '7';
leet_map['T'] = '7';
leet_map['l'] = '1';
leet_map['L'] = '1';

char *ptr = str;
while (*ptr != '\0')
{
*ptr = leet_map[(unsigned char)(*ptr)];
ptr++;
}

return (str);
}
