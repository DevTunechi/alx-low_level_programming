#include <stdio.h>

/**
 * main- entry point
 * Return: Always return 0
 */

int main(void)
{
char lowercase, uppercase;
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
putchar(lowercase);
}
for (lowercase = 'A'; uppercase <= 'Z'; uppercase++)
{
putchar(uppercase);
}
putchar('\n');
return (0);
}
