#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int a = 1, b = 2, a_half1, a_half2, b_half1, b_half2, half1, half2;
    int count;

    printf("%lu, %lu", a, b);

    for (count = 2; count < 98; count++)
    {
        if (a > 10000000000 || b > 10000000000) /* handle large numbers */
        {
            a_half1 = a / 10000000000;
            a_half2 = a % 10000000000;
            b_half1 = b / 10000000000;
            b_half2 = b % 10000000000;

            half1 = a_half1 + b_half1;
            half2 = a_half2 + b_half2;

            if (half2 > 10000000000)
            {
                half1 += half2 / 10000000000;
                half2 = half2 % 10000000000;
            }

            printf(", %lu%010lu", half1, half2);

            a = b;
            b = half1 * 10000000000 + half2;
        }
        else
        {
            unsigned long int temp = a + b;
            printf(", %lu", temp);
            a = b;
            b = temp;
        }
    }

    printf("\n");
    return (0);
}

