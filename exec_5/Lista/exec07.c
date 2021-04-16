#include <stdio.h>

int main() {

    int n, m;
    printf("\n\nInforme a altura e a largura: ");
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++){
        printf("[");
        for (int j = 0; j < m; j++){
            printf("X-");
        }
        printf("\b");
        printf("]");
        printf("\n");
    }

    return 0;
}