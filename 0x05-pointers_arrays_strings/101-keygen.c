#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme program
 *
 * Return: 0 on success
 */

int main(void)

{
char password[6];

srand(time(0));

for (int i = 0; i < 5; i++)
{
password[i] = 'A' + rand() % 26;
}

password[5] = '\0';

printf("%s\n", password);

return (0);
}
