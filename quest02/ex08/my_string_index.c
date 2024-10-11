#include <stdio.h>

int my_string_index(char* haystack, char needle) {
    int position = -1;
    int i = 0;

    while (haystack[i] != '\0') {
        if (haystack[i] == needle) {
            position = i;
            break;
        }
        i++;
    }

    return position;
}