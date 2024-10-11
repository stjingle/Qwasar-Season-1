#include <stdio.h>
#include <stdlib.h>
#define MAX_ARRAY_SIZE 128

void fill_arr(int* arr, char* str) {
    int index = 0;

    while (str[index] != '\0') {
        if (str[index] != '"') {
            arr[(int)str[index]] += 1;
        }
        index += 1;
    }
}

void print_arr(int* arr, int size_arr) {
    int index = 0;

    while (index < size_arr) {
        if (arr[index] > 0) {

            printf("%c:%d\n", index, arr[index]);
        }

        index += 1;
    }
}

int main(int ac, char **av) {
    int index = 1;
    int arr[MAX_ARRAY_SIZE] = {0};

    while (index < ac) {
        fill_arr(&arr[0], av[index]);
        index += 1;
    }
    print_arr(&arr[0], MAX_ARRAY_SIZE);
    return EXIT_SUCCESS;
}