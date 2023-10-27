#include "main.h"
/**
 * _islower- Entry point for function
 * Description - The function checks for lowercase character
 * @c: character to be checked
 * Return: 1 if c is lowercase, return 0 otherwise
 */

int _islower(int c)
{
return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
