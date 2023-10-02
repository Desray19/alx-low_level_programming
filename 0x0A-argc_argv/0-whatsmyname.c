#include <stdio.h>
/**
* main - prints the name
* @argv: array of command lines
* @argc: size of argv
* Return: 0
**/
int main(int argc, char **argv)
{
if (argc >= 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
