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
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif
int length (char* str2){
    int count = 0;
    for(int k=0; str2[k] != '\0'; k++){
        count++;
    }
    return count;
}
integer_array* my_count_on_it(string_array* str)
{
    integer_array* ptr = malloc(sizeof(integer_array));
    ptr->size = str->size;
    ptr->array = malloc(str->size * sizeof(int));
    for(int i = 0; i < str->size; i++){
        
        ptr->array[i] = length(str->array[i]);
        
    }
    return ptr;
}