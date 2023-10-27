#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * is_positive_number - Checks for positive number
 * @str: The input string
 * Return: 1 if positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
if (*str == '\0')
{
return (0);
}
while (*str != '\0')
{
if (!isdigit(*str))
{
return (0);
}
str++;
}

return (1);
}

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings containing the arguments
 *
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (is_positive_number(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);
return (0);
}
