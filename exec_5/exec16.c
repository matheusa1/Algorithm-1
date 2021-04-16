#include <stdio.h>

int main(){

    int PlayerY = 5;
    int PlayerX = 10;
    int bole = 0;

    int move;

    while (bole != 1){

        for(int i = 0; i < 10; i++){
                printf("\n");
            for(int j = 0; j < 20; j++){
                if (i == PlayerY && j == PlayerX){
                    printf("#");
                } else {
                    printf(".");
                }
            }
        }

        printf("\n Direcao desejada (0 para sair): ");
        scanf("%d", &move);
        //printf("\n\n");

        if(move == 8){
            if(PlayerY == 0){
                PlayerY = 9;
            }
            else PlayerY--;
        }
        if(move == 5){
            if(PlayerY == 9){
                PlayerY = 0;
            }
            else PlayerY++;            
        }
        if(move == 4){
            if(PlayerX == 0){
                PlayerX = 19;
            }
            else PlayerX--;             
        }
        if(move == 6){
            if(PlayerX == 19){
                PlayerX = 0;
            }
            else PlayerX++;
        }
        if(move == 0){
            bole = 1;
        }
    }
    return 0;
}