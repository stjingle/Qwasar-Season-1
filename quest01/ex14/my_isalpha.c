#include <stdio.h>
int my_isalpha(char Alphabeth) {
    if ((Alphabeth >= 'A' && Alphabeth <= 'Z') || (Alphabeth >= 'a' && Alphabeth <= 'z')) {
        return 1;
    } else {
        return 0;
    }
}