#include <stdio.h>
#include <limits.h>

int main(){
    // 10 //
    int n, d;

    printf("Digite o valor desejado: ");
    scanf("%d",&n);

    if(n > INT_MAX){
        printf("Valor não suportado!");
    }
    else
    while (n > 0){
        d = n % 10;
        n = n / 10;
        printf("\n%d",d);
    }

    return 0;
}