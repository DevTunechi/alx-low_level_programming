#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Size of the memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 * Exits with status 98 if malloc fails.
 */

void *malloc_checked(unsigned int b)
{
void *result;

result = malloc(b);

if (result == NULL)
{
exit(98);
}

return (result);
}
