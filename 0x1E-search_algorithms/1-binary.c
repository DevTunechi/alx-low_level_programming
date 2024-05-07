/*
 * File: 1-binary.c
 * Auth: George Kabucho
 */

#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  * @array: Pointer to 1st element of array to search
  * @size: Number of elements in the array
  * @value: Value to search for
  * Olatunji Oluwadare
  * Return: If value is not present or array is NULL, -1.
  *         Else, return index of the item
  * Description: Print sub Array.
  */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
