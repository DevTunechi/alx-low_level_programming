#include "main.h"

/**
 * _strcat - appends src to the destination string
 * @dest: str to append by src
 * @src: str to append to dest
 * Olatunji Oluwadare
 * Return: add of dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;
i = j = 0;
while (*(dest + i))
i++;
while ((*(dest + i) = *(src + j)))
{
i++;
j++;
}
return (dest);
}
