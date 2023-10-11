#include <stdio.h>
#include <stdbool.h>

/**
 * main - This function finds and prints the Fibonacci number 244293.
 * Return: Always return 0.
 */

int main(void)

{
int i = 0;
long j = 1, k = 2;
bool found = false;

while (i < 52)
{
if (i == 0)
printf("%ld", j);
else if (i == 1)
printf(", %ld", k);
else
{
k += j;
j = k - j;
printf(", %ld", k);
}

if (k == 244293)
{
found = true;
break;
}

++i;
}

if (found)
{
printf("\n(7 chars long)\n");
}
else
{
fprintf(stderr, "[Anything]\n");
}

return (0);
}

