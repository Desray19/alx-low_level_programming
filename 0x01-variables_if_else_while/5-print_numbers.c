#include <stdio.h>
/**
 * main - numbers function
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int num;
for (num = 0; num <= 9 ; num++)
{
printf("%d", num);
if (num == 9)
{
putchar('\n');
}
}
return (0);
}
