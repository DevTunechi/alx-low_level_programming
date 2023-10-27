#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to concatenate from src.
 *
 * Description: Concatenates n bytes from src to the end of dest.
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)

{
char *dest_ptr = dest;
while (*dest_ptr != '\0')
{
dest_ptr++;
}
while (*src != '\0' && n > 0)
{
*dest_ptr = *src;
dest_ptr++;
src++;
n--;
}
*dest_ptr = '\0';
return (dest);
}
