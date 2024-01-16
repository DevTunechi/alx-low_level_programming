#include "main.h"

/**
  * _strchr - locate char in str
  * @s: src str
  * @c: char to find
  * Olatunji Oluwadare
  * Return: the str from char found
  */

char *_strchr(char *s, char c)
{
int a = 0, b;

while (s[a])
{
a++;
}

for (b = 0; b <= a; b++)
{
if (c == s[b])
{
s += b;
return (s);
}
}

return ('\0');
}
