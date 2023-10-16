#include "main.h"
/**
 * swap_int - Swaps the value of integers
 *
 * @a: Character goes in to temp
 *
 * @b: b goes in to a
 */

void swap_int(int *a, int *b)

{
int temp = *a;
*a = *b;
*b = temp;
}

