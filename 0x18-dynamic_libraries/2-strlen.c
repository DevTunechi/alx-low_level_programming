#include "main.h"

/**
 * _strlen - find length of a string
 * Olatunji Olauwadare
 * @s: pointer to string to check
 * Return: void
*/


int _strlen(char *s)
{
int count = 0;
while (s[count])
count++;

return (count);
}
