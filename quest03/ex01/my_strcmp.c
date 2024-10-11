int my_strcmp(char* fstr, char* sstr)
{
    int c1=0,c2=0;
    while(fstr[c1] != '\0') c1++;
    while(sstr[c2] != '\0') c2++;
    c2-=c1;
    return c2;
}