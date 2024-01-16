#include "main.h"

/**
  * _memcpy - copy mem area
  * @dest: pointer to retur
  * @src: source mem area
  * @n: bytes from mem area to cpy
  * Olatunji Oluwadare
  * Return: the pointer to dest.
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
