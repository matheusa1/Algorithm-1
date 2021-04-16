#include <stdio.h>

int main() {

    int n;

    printf("Digite o numero desejado: ");
    scanf("%d", &n);

    int xs = n;
    int spcs = 0;
    for (int i = 0; i < n; i++){
        for(int k = 0; k < spcs; k++){
            printf(" ");
        }
        spcs = spcs + 1;
        for (int j = 0; j < xs; j++){
            printf("X");
        }
        xs = xs - 1;
        printf("\n");
    }
        

    return 0;
}