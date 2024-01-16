#include "main.h"

/**
 * _memset -function fills mem wit const values
 * @s: pointer to char parameters
 * @b: constant byte
 * Olatunji Oluwadare
 * @n: byte of mem area
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
