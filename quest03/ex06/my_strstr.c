char* my_strstr(char* str_1, char* str_2)
{
    int flag = 0, countEnt = 0, found = 0, j=0, saveLast;
    if(strlen(str_2) <= strlen(str_1)){

    for(int i =0; str_1[i] != '\0'; i++){
        saveLast = i;
        for(j = 0; str_2[j] != '\0'; j++){
            if(str_1[i] == str_2[j]){
                if(countEnt == 0) flag = i;
                countEnt++;
                i++;
            } 

        } i = saveLast;
        if(countEnt == j){
            found = 1;
            break;
        }
        countEnt = 0;
    }
    }
    int size = strlen(str_1) - flag;
    char* needle = (char*)malloc(size*sizeof(char*));
    if(found == 1){
        int index = 0, location = flag;
        while(index < size){
            needle[index] = str_1[location];
            location++;
            index++;
        }return needle;
    } else return 0;

}