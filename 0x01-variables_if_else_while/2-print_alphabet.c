#include <stdio.h>
/**
 * main - alphabet function
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
if (alphabet == 'z')
{
putchar('\n');
}
}
return (0);
}
