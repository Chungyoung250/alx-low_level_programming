#include <stdio.h>

void print_fibonacci(int n);

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
	    print_fibonacci(98);
	        return (0);
}

/**
 *  * print_fibonacci - Prints the first n Fibonacci numbers
 *   * @n: The number of Fibonacci numbers to print
 *    */
void print_fibonacci(int n)
{
	    unsigned long a_low = 1, a_high = 0;
	        unsigned long b_low = 2, b_high = 0;
		    unsigned long tmp_low, tmp_high;
		        int count;

			    printf("%lu, %lu", a_low, b_low);

			        for (count = 2; count < n; count++)
					    {
						            tmp_low = a_low + b_low;
							            tmp_high = a_high + b_high;

								            if (tmp_low > 999999999)
										            {
												                tmp_low -= 1000000000;
														            tmp_high += 1;
															            }

									            a_low = b_low;
										            a_high = b_high;
											            b_low = tmp_low;
												            b_high = tmp_high;

													            if (b_high)
															                printf(", %lu%09lu", b_high, b_low);
														            else
																                printf(", %lu", b_low);
															        }

				    printf("\n");
}

