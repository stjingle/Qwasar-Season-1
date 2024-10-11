#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif
char* my_join(string_array* param_1, char* param_2)
{
    int joint = 0;
    for(int i = 0; i < param_1 -> size; i++) {
        joint = joint + strlen(param_1 -> array[i]);
    }
    joint = joint + (param_1 -> size - 1) * strlen(param_2);
    char* suzy;
    suzy = (char*)malloc(joint * sizeof(char));
    int index = 0;
    for(int i = 0; i < param_1 -> size; i++) {
        for(int j = 0; j < strlen(param_1 -> array[i]); j++) {
            suzy[index] = param_1 -> array[i][j];
            index++;
        }
        if(i != param_1 -> size - 1) {
            for(int j = 0; j < strlen(param_2); j++) {
                suzy[index] = param_2[j];
                index++;
            }
        }
    }
    return suzy;
}