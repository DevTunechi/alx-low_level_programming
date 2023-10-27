#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments given to the program
 * @argv: The arguement 
 * Return: 0
 */

int main(int argc, char *argv[])
{
int a;

for (a = 0; a < argc; a++)
{
printf("%s\n", argv[a]);
}
return (0);
}
