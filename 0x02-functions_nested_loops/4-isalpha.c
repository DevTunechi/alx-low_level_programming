#include "main.h"
/**
 * _isalpha- Entry point for function
 * Description - The function checks for lowercase character
 * @c: character to be checked
 * Return: 1 if c is lowercase, return 0 otherwise
 */

int _isalpha(int c)

{
if ((c >= 65 && c <= 90) || (c >= 91 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
