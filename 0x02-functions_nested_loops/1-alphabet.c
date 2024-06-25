#include "main.h"

void print_alphabet(void) {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int i;

    for (i = 0; alphabet[i] != '\0'; i++) {
        _putchar(alphabet[i]);
    }
    _putchar('\n');
}

