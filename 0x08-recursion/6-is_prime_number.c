#include "main.h"

int check_prime(int n, int divisor);

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The input number.
 * 
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}

return (check_prime(n, 2));
}
/**
 * check_prime - Helper function to check if a number is prime using recursion.
 * @n: The input number.
 * @divisor: The current divisor to check for divisibility.
 * 
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int check_prime(int n, int divisor)
{
if (divisor > n / 2)
{
return (1);
}

if (n % divisor == 0)
{
return (0);
}

return (check_prime(n, divisor + 1));
}
