#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to search for.
 * Return: Pointer to the beginning of the located substring.
 */

char *_strstr(char *haystack, char *needle)

{
while (*haystack != '\0')
{
char *tempHaystack = haystack;
char *tempNeedle = needle;

while (*tempNeedle != '\0' && *tempHaystack == *tempNeedle)
{
tempHaystack++;
tempNeedle++;
}

if (*tempNeedle == '\0')
{
return (haystack);
}

haystack++;
}

return (NULL);
}
