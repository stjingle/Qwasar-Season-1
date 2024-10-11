#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "Stephen_functions.h"

int main(int argc, char** argv) {
    char* D_hidden_Code = (char*) malloc(5 * sizeof(char));
    char* UsEr_PreDict = (char*) malloc(6 * sizeof(char));
    int attempts = 0;

    if (argc > 1 && strcmp(argv[1], "-c") == 0) {
        if (argc != 3) {
            printf("Usage: ./my_mastermind -c [code]\n");
            return 1;
        }
        strncpy(D_hidden_Code, argv[2], 4);
        D_hidden_Code[4] = '\0';
    } else {
        srand(time(NULL));
        for (int i = 0; i < 4; i++) {
            D_hidden_Code[i] = '0' + rand() % 9;
        }
        D_hidden_Code[4] = '\0';
    }

    printf("Will you find the secret code?\nPlease enter a valid guess\n");

    while (Good_PositioneD(D_hidden_Code, UsEr_PreDict) < 4 && attempts < 10) {
        if (AccepTance(UsEr_PreDict) == 0) {
            return 0;
        }
        if (CHECKINGProcesS(UsEr_PreDict)) {
            printf("\nRound %d\nWell placed pieces: %d\nMisplaced pieces: %d\n",
                   attempts,
                   Good_PositioneD(D_hidden_Code, UsEr_PreDict),
                   Not_PositioneD(D_hidden_Code, UsEr_PreDict) - Good_PositioneD(D_hidden_Code, UsEr_PreDict));
            attempts++;
        } else {
            printf("Wrong input!\n");
        }
    }

    if (Good_PositioneD(D_hidden_Code, UsEr_PreDict) == 4) {
        printf("Congratz! You did it!\n");
    } else {
        printf("Game over. The code was %s\n", D_hidden_Code);
    }

    free(D_hidden_Code);
    free(UsEr_PreDict);
    return 0;
}