#include <stdio.h>

char *my_strchr(char *s, char c)
{
    for (; *s != '\0'; s++)
        if (*s == c)
            return s;

    return NULL;
}