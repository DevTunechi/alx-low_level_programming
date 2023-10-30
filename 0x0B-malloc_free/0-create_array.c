#include "main.h"
#include <stdlib.h>

/**
* create_array - This function creates an array of chars,
* also starts it with a specific character
* @size: size of the array
* @c: original value
* Return: pointer to the array, NULL on error
*/

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
return (NULL);

array = (char *)malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
