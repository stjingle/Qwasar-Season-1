#include <stdio.h>

int my_putchar(char c) {
    return write(1, &c, 1);
}

void my_putstr(char* xter) {
    int i = 0;
    while (xter[i] != '\0') {
        my_putchar(xter[i]);
        i++;
    }
}