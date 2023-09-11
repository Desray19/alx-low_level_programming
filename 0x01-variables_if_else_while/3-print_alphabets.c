#include <stdio.h>
/**
 * main - alphabets function
 *
 * Return: always 0 (Success)
 */
int main(void)
{
int alphabets;
for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
putchar(alphabets);
}
for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
{
putchar(alphabets);
if (alphabets == 'Z')
{
putchar('\n');
}
}
return (0);
}
