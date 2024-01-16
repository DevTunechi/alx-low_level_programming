#include "main.h"

/**
 * *_strcpy -  copies string pointed to by src
 * @dest: char type str
 * @src: char type str
 * Description: Copy string pointed to by pointer src to
 * Olatunji Oluwadare
 * the buffer pointed to by dest
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int index = -1;

do {
index++;
dest[index] = src[index];
} while (src[index] != '\0');

return (dest);
}
