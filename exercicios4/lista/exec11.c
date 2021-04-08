#include <stdio.h>

int main(){

    int x, y, i;

    printf("Digite o numero ao quadrado desejado: ");
    scanf("%d",&x);

    y = 1;
    for(int i = 1; i < x; i++){
        printf(" %d +", y);
        y = y + 2;
    }
    printf(" %d = (%d)^2", y, x);

    return 0;
}