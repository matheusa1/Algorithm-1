#include <stdio.h>
int main(){

    int n;

    printf("digite a quatidade de linhas desejadas: ");
    scanf("%d",&n);

    int xs = 1;
    int spcs = n - 1;
    for(int i = 0; i < n; i++) {
        for (int k = 0; k < spcs; k++){
            printf(" ");
        }
        spcs = spcs - 1;
        for(int j = 0; j < xs; j++) {
            printf("X");
        }
        xs = xs + 2;

        printf("\n");
    }

    return 0;   
}