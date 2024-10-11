#include <stdio.h>

void my_swap(int *fnum,int *snum){
    int swap;
    swap=*fnum;
    *fnum=*snum;
    *snum=swap;
}