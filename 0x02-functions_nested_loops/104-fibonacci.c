#include <stdio.h>

/**
 * main - fibonacci 2 funtion
 *
 */
int main(void)
{
    unsigned long int a = 1, b = 2, next;
    int count;

    printf("%lu, %lu", a, b);

    for (count = 2; count < 98; count++)
    {
        next = a + b;
        printf(", %lu", next);
        a = b;
        b = next;
    }

    printf("\n");

    return (0);
}

