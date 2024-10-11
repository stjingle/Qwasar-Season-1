#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

bool my_is_sort(integer_array* param_1)
{
    int ascend = 0, descend = 0;
    for(int i =0; i < param_1->size; i++){
        if(param_1->array[i] <= param_1->array[i+1]) ascend++;
    }
     for(int i =0; i < param_1->size; i++){
        if(param_1->array[i] >= param_1->array[i+1]) descend++;
    }
    if(ascend == param_1->size-1 || descend == param_1->size-1 || param_1->size == 0) return true; else return false;
}