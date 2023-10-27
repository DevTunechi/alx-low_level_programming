#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including the program name)
 * @argv: An array of strings containing the command-line arguments
 *
 * Description: Prints the name of the program followed by a new line.
 * Program will print the new name without recompilation.
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
if (argc >= 1)
{
printf("%s\n", argv[0]);
}
else
printf("mynameis\n");
return (0);
}
