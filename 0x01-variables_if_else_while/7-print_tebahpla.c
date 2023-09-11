#include <stdio.h>
/**
 * main - tebahpla function
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int alphabet;
for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
{
putchar(alphabet);
if (alphabet == 'a')
{
putchar('\n');
}
}
return (0);
}
