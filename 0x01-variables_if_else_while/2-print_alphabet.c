#include <stdio.h>

/**
 * main- entry point
 * Return: Always return 0
 */

int main(void)
{
char a;
for (a = 'a'; a <= 'z' || a <= 'Z'; a++)
{
putchar(a);
if (a == 'Z')
a = 'A' - 1;
}
putchar('\n');
return (0);
}
