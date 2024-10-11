#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "Stephen_functions.h"

int Not_PositioneD(char* D_hidden_Code, char* UsEr_PreDict) {
    int notpositioned = 0;
    for (int ind = 0; ind < 4; ind++) {
        for (int jet = 0; jet < 4; jet++) {
            if (UsEr_PreDict[ind] == D_hidden_Code[jet]) {
                notpositioned++;
            }
        }
    }
    return notpositioned;
}

int Good_PositioneD(char* D_hidden_Code, char* UsEr_PreDict) {
    int goodpositioned = 0;
    for (int ind = 0; ind < 4; ind++) {
        if (UsEr_PreDict[ind] == D_hidden_Code[ind]) {
            goodpositioned++;
        }
    }
    return goodpositioned;
}

int CHECKINGProcesS(char* UsEr_PreDict) {
    for (int ind = 0; ind < 4; ind++) {
        if (UsEr_PreDict[ind] < '0' || UsEr_PreDict[ind] > '8') {
            return 0;
        }
    }
    return 1;
}

int AccepTance(char input[]) {
    int result = read(0, input, 5);
    input[4] = '\0';
    if (result == 0) {
        printf("Game terminated by user.\n");
        exit(0);
    }
    if (strlen(input) > 4) {
        printf("Error: Input more than 4 digits is not allowed.\n");
        return 0;
    }
    return result;
}
