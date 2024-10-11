char* my_upcase(char* x)
{
    int i =0;
    while(x[i] != '\0'){
        if(x[i]>=97 && x[i] <=122) x[i]-=32;
        i++;
    }
    return x;
}