#include <stdio.h>

/**
 * Main- Sizes of Char, int, long int, long long int
 * Return: Always return zero
 */

int main(void)
{
char c;
int i;
long int li;
long long int lli;
printf("The size of an c is: %lu.\n", (unsigned long)sizeof(c));
printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
printf("The size of an long int is: %lu.\n", (unsigned long)sizeof(li));
printf("The size of an long long int is: %lu.\n", (unsigned long)sizeof(lli));
return (0);
}
