#include "main.h"

void print_alphabet_x10(void) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
    int i, j;

    for (j = 0; j < 10; j++) {
        for (i = 0; alphabet[i] != '\0'; i++) {
            _putchar(alphabet[i]);
        }
    }
}

