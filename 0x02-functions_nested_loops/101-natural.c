#include <stdio.h>
/**
 * main - prinsts multiple of 3 and 5 funtion
 *
 */
int main(void)
{
int i, sum = 0;
for (i = 1; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
