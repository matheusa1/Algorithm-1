#include <stdio.h>

int main(){
    int x, n1, n2, nx;

    printf("\n\nDigite o numero do termo desejado: ");
    scanf("%d", &x);

    n1 = 1;
    n2 = 1;
    nx = 2;
    for(int i = 1; i <= x; i++){
        nx = n1 + n2;
        n1 = n2;
        n2 = nx;
    }

    printf("\nValor da casa n%d = %d",x, nx);
    printf("\n\n");

    return 0;
}