#include <stdio.h>
int my_isupper(char Ups) {
    if (Ups >= 'A' && Ups <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}