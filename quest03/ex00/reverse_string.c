#include <stdio.h>
#include <string.h>

char* reverse_string(char* word) {
    int length = strlen(word);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }

    return word;
}