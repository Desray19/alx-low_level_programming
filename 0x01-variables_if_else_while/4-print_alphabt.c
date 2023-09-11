#include <stdio.h>
/**
 * main - alphabt function
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int alphabt;
for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
{
if (alphabt == 'q' || alphabt == 'e')
continue;
putchar(alphabt);
if (alphabt == 'z')
{
putchar('\n');
}
}
return (0);
}
