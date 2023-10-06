#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* @argc: size of argv
* @argv: array
* Return: 0
**/
int main(int argc, char *argv[])
{
int cents, change = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
while (cents > 0)
{
if (cents >= 25)
{
cents -= 25;
change += 1;
}
else if (cents >= 10)
{
cents -= 10;
change += 1;
}
else if (cents >= 5)
{
cents -= 5;
change += 1;
}
else if (cents >= 2)
{
cents -= 2;
change += 1;
}
else
{
cents -= 1;
change += 1;
}
}
printf("%d\n", change);
return (0);
}