#include <stdio.h>

int main(){

    int m, n;

    printf("\n\nInforme a altura e a largura: ");
    scanf("%d %d", &n, &m);

    printf("\n");

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("X");
        }
        printf("\n");
    }
    // utilizando git
    printf("\n\n");
    return 0;
}