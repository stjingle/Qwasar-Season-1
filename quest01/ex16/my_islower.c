#include <stdio.h>
int my_islower(char Low) {
    if (Low >= 'a' && Low <= 'z') {
        return 1;
    } else {
        return 0;
    }
}