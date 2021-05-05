#include <stdio.h>
#include <string.h>

void clearBuffer();
void mapImpress(int position[2], int chestPos[2], int chestVerify);
void playerCommand(char command[], int position[2], int *chestVerify);

int main() {
    int cont = 0;
    char command[10];
    int boole = 1;
    int posInit[] = {9, 4};
    int position[2] = {9, 4};
    int chestPos[2] = {19, 6};
    int chestVerify = 1;
    mapImpress(posInit, chestPos, chestVerify);
    while(boole != 0) {
        printf("\nCommand > ");
        scanf(" %9[^\n]", command);
        clearBuffer();
        if(strcmp(command, "exit") == 0) boole = 0;
        else{
            if(strcmp(command, "reset")  == 0) {
                for(int i = 0; i < 2; i++) position[i] = posInit[i];
                chestVerify = 1;
                mapImpress(position, chestPos, chestVerify);
            }
            else {
                playerCommand(command, position, &chestVerify);
                mapImpress(position, chestPos, chestVerify);
            }
        }
    }
    return 0;
}

void clearBuffer() {
    while(getchar() != '\n');
}

void mapImpress(int position[2], int chestPos[2], int chestVerify) {
    printf("\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            if(i == position[1] && j == position[0]) printf("X ");
            else {
                if(i == chestPos[1] && j == chestPos[0] && chestVerify == 1) printf("O ");
                else{
                    if(i == chestPos[1] && j == chestPos[0] && chestVerify == 0) printf("U ");
                    else printf("- ");
                }
            }
        }
        printf("\n");
    }
}

void playerCommand(char command[], int position[2], int *chestVerify) {
    if(strcmp(command, "w") == 0) {
        if(position[1] == 0) position[1] = 9;
        else {
            if(position[0] == 19 && position[1] == 7);
            else position[1]--;
        }
    }
    if(strcmp(command, "s") == 0) {
        if(position[1] == 9) position[1] = 0;
        else{
            if(position[0] == 19 && position[1] == 5);
            else position[1]++;
        }
    }
    if(strcmp(command, "a") == 0) {
        if(position[0] == 0 && position[1] == 6);
        else {
            if(position[0] == 0) position[0] = 19;
            else position[0]--;
        }
    }
    if(strcmp(command, "d") == 0) {
        if(position[0] == 19) position[0] = 0;
        else {
            if(position[0] == 18 && position[1] == 6);
            else position[0]++;
        }
    }
    if(((position[0] == 18 && position[1] == 6) || (position[0] == 19 && position[1] == 5) || (position[0] == 19 && position[1] == 7)) && strcmp(command, "open") == 0) {
        *chestVerify = 0;
    }
    if(((position[0] == 18 && position[1] == 6) || (position[0] == 19 && position[1] == 5) || (position[0] == 19 && position[1] == 7)) && strcmp(command, "close") == 0) {
        *chestVerify = 1;
    }
}