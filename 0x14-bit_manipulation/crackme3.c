#include <stdio.h>
#include <string.h>

int check_password(const char *input)
{
const char *correct_password = "Congratulations!";

return (strcmp(input, correct_password) == 0);
}

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
}
else 
{
printf("Try again!\n");
}

return (0);
}
