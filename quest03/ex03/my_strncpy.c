char* my_strncpy(char* str_1, char* str_2, int str_3)
{
    for(int i = 0; i < str_3; i++) str_1[i] = str_2[i];
    return str_2;
}