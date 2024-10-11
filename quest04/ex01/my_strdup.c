#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* my_strdup(char* param_1)
{
char* suzy;
suzy = (char *) malloc(strlen(param_1) * sizeof(char));
for ( int i = 0; i< strlen(param_1); i ++){
    suzy [i] = param_1 [i];
}
return suzy ;
}