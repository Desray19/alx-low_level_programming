#include <stdio.h>
/**
 * main - Base16 function
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int alphabet;
for (alphabet = '0'; alphabet <= '9' ; alphabet++)
{
putchar(alphabet);
}
for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
{
putchar(alphabet);
if (alphabet == 'f')
{
putchar('\n');
}
}
return (0);
}
