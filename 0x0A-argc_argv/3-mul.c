#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments passed
 * @argv: Array of pointers to strings
 *
 * Return: 0 on Success or 1 for Error
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;

printf("%d\n", result);
return (0);
}
