#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- This program will assign a random number to the variable n
 * Return: Return 0 always
 */

int main(void)

{
int n;
int endn;

srand(time(0));
n = rand() - RAND_MAX / 2;
endn = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n ", n, endn);
}
else if (endn == 0)
{
printf("Last digit of %d is %d and is 0\n", n, endn);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, endn);
}
return (0);
}
