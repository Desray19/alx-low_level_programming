#include "main.h"
#include <stdio.h>
/**
 * main - print to 98 funtion
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
}
else
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
}
printf("98\n");
}
