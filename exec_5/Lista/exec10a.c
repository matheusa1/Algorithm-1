#include <stdio.h>

#define COLOR_BG_YELLOW  43
#define COLOR_BG_BLUE    44
#define COLOR_RESET      0
#define SET_COLOR(color) printf("\033[%dm", color);

int main(){

    int n;

    printf("digite a quatidade de linhas desejadas: ");
    scanf("%d",&n);

    int xs = 1;
    int spcs = n - 1;
    for(int i = 0; i < n; i++) {
        for (int k = 0; k < spcs; k++){
            SET_COLOR(COLOR_BG_BLUE);
            printf(" ");
        }
        for(int j = 0; j < xs; j++) {
            SET_COLOR(COLOR_BG_YELLOW);
            printf(" ");
        }
        xs = xs + 2;
        for (int k = 0; k < spcs; k++){
            SET_COLOR(COLOR_BG_BLUE);
            printf(" ");
        }
        spcs = spcs - 1;
        SET_COLOR(COLOR_RESET);
        printf("\n");
    }

    return 0;   
}