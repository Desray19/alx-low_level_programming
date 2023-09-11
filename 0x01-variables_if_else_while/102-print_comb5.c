#include <stdio.h>

/**
 * main - nested function
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i, j;

for (i = 0; i <= 99; i++) {
for (j = i; j <= 99; j++) {
if (i == j) continue;

putchar('0' + (i / 10));
putchar('0' + (i % 10));

putchar(' ');

putchar('0' + (j / 10));
putchar('0' + (j % 10));

if (i != 99 || j != 98) {
putchar(',');
putchar(' ');
}
}
}

return (0);
}
