#include "main.h"

/**
 * _strncpy - Copies up to n bytes of the src str to dest str
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to copy from src.
 *
 * Description: Copies up to n bytes from the source string src to the
 * destination string dest. If src is less than n bytes long, the remaining
 * bytes in dest will be filled with null bytes.
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)

{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
