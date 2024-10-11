char* my_downcase(char* x)
{
    int i =0;
    while(x[i] != '\0'){
        if(x[i]>=65 && x[i] <=90) x[i]+=32;
        i++;
    }
    return x;
}