#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements in the array.
 *
 * Description: Reverses the content of the array of integers by swapping
 * elements from the beginning with elements from the end of the array.
 */

void reverse_array(int *a, int n)

{
int start = 0;
int end = n - 1;
int temp;

while (start < end)
{
temp = a[start];
a[start] = a[end];
a[end] = temp;

start++;
end--;
}
}
