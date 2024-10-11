char* my_strrchr(char* str_1, char str_2)
{
    int lastOcc = 0,i= 0;
     while(str_1[i] != '\0'){
         if(str_2 == str_1[i]) lastOcc = i; 
         i++;
     }
     int size = i-lastOcc+1;
    char* lastStr = (char*)malloc(size*sizeof(char*));
    if (lastOcc != 0){
        i = 0;
    while(i < size){
        lastStr[i] = str_1[lastOcc];
        lastOcc++;
        i++;
    }
    return lastStr;  
    } else return 0; 
}