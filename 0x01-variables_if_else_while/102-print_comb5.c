#include <stdio.h>

/**
 * main - nested function
 *
 * Return: always 0 (Success)
 */

int i, j;

    for (i = 0; i <= 99; i++) {
        for (j = i; j <= 99; j++) {
            // Print the first number
            putchar('0' + (i / 10));
            putchar('0' + (i % 10));

            // Space
            putchar(' ');

            // Print the second number
            putchar('0' + (j / 10));
            putchar('0' + (j % 10));

            // Comma and space unless it's the last combination
            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}
