#include "main.h"

int find_sqrt(int n, int guess);

/**
 * _sqrt_recursion - Returns natural square root of a number.
 * @n: The input number.
 *
 * Return: The square root of n. If n does not have a square root, -1.
 */

int _sqrt_recursion(int n)
{
return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Helper function to find the sqrt using recursion.
 * @n: The input number.
 * @guess: The current guess for the square root.
 *
 * Return: The natural sqrt of n, or -1 if no exact sqrt is found.
 */

int find_sqrt(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
else if (guess * guess > n)
{
return (-1);
}
else
{
return (find_sqrt(n, guess + 1));
}
}
