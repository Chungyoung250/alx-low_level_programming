#include <stdio.h>

int main(void) {
	  for (int tens = 0; tens <= 9; tens++) {
		      for (int units = tens; units <= 9; units++) {
			            putchar(tens + '0');
				          putchar(units + '0');
					        if (tens != 9 || units != 9) {
							        putchar(',');
								        putchar(' ');
									      }
						    }
		        }
	    putchar('\n');
	      return (0);
}
#include <stdio.h>

int main(void) {
	  for (int tens = 0; tens <= 9; tens++) {
		      for (int units = tens; units <= 9; units++) {
			            putchar(tens + '0');
				          putchar(units + '0');
					        if (tens != 9 || units != 9) {
							        putchar(',');
								        putchar(' ');
									      }
						    }
		        }
	    putchar('\n');
	      return (0);
}

