#include <stdio.h>
#include <string.h>

/**
 * check_password - Compares the input password with the correct password.
 * @input: The password to be checked.
 * Return: 1 if the password is correct, 0 otherwise.
 */

int check_password(const char *input)
{
const char *correct_password = "Congratulations!";

return (strcmp(input, correct_password) == 0);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 * Return: 0 on success, 1 on failure.
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Usage: %s <password>\n", argv[0]);
return (1);
}

if (check_password(argv[1]))
{
printf("Congratulations!\n");
}else
{
printf("Try again!\n");
}

return (0);
}
