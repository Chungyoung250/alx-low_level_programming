#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number defining the table dimension.
 */
void print_times_table(int n)
{
    int i, j, product;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            product = i * j;
            if (j != 0)
                printf(", %3d", product);
            else
                printf("%d", product);
        }
        printf("\n");
    }
}

