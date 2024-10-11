#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* my_spaceship(char* navigation)
{
    int x = 0, y = 0;
    char *dir = "up";
    
    for(int i = 0; i < strlen(navigation); i++) {
        if(navigation[i] == 'R') {
            if(*dir == 'u') {
                dir = strdup("right");
            } else if(*dir == 'r') {
                dir = strdup("down");
            } else if(*dir == 'd') {
                dir = strdup("left");
            } else if(*dir == 'l') {
                dir = strdup("up");
            }
        }
        if(navigation[i] == 'L') {
            if(*dir == 'u') {
                dir = strdup("left");
            } else if(*dir == 'l') {
                dir = strdup("down");
            } else if(*dir == 'd') {
                dir = strdup("right");
            } else if(*dir == 'r') {
                dir = strdup("up");
            }
        }
        if(navigation[i] == 'A') {
            if(*dir == 'u') {
                y--;
            }
            if(*dir == 'l') {
                x--;
            }
            if(*dir == 'd') {
                y++;
            }
            if(*dir == 'r') {
                x++;
            }
        }
    }
    char *suzy;
    suzy = (char*)malloc(40 * sizeof(char));
    
    snprintf(suzy, 40, "{x: %d, y: %d, direction: '%s'}", x, y, dir);
    
    return suzy;
}