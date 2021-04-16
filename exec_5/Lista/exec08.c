#include <stdio.h>

int main() {
    
    int n, m;
    printf("\n\nInforme a altura e a largura: ");
    scanf("%d %d", &n, &m);

    printf("+");
    for (int i = 0; i < m - 2; i++) {
        printf("=");
    }
    printf("+");
    printf("\n");

    for (int j = 0; j < n - 2; j++){
        printf("|");
        for(int k = 0; k < m - 2; k++){
            printf("-");
        }
        printf("|");
        printf("\n");
    }

    printf("+");
    for (int l = 0; l < m - 2; l++) {
        printf("=");
    }
    printf("+");

    return 0;
}