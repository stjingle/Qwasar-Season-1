#include <stdio.h>
int my_isdigit(char Digits) {
    if (Digits >= '0' && Digits <= '9') {
        return 1;
    } else {
        return 0;
    }
}