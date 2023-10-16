#include "main.h"

/**
 * _atoi - Converts a string to an integer
 *
 * @s: Pointer to the input string
 *
 * Return: Converted integer value
 */

int _atoi(char *s)
{
int sign = 1;
int num = 0;

while (*s == ' ')
{
s++;
}

if (*s == '-' || *s == '+')
{
if (*s == '-')
{
sign = -1;
}
s++;
}

while (*s >= '0' && *s <= '9')
{

if (num > (INT_MAX - (*s - '0')) / 10)
{

return (sign == 1 ? INT_MAX : INT_MIN);
}

num = num * 10 + (*s - '0');
s++;
}

return (num *sign);
}
