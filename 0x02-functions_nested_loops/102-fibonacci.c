#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
int i;
long num1 = 0, num2 = 1, sum = 0;
for (i = 0; i < 50; i++)
{
sum = num1 + num2;
printf("%ld", sum);
num1 = num2;
num2 = sum;
if (i != 49)
{
printf(", ");
}
}
printf("\n");
return (0);
}
