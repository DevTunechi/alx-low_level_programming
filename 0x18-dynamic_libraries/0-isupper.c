#include "main.h"
#include <stdio.h>
/**
 * _isupper - function to check if c is upper
 * @c: input for character
 * Olatunji Oluwadare
 * Return: 1 if its uppercase, 0 if no
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
