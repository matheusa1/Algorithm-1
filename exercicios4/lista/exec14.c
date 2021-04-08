#include <stdio.h>

int main(){

    int n, conta, backup;

    printf("\n\nDigite o numero da conta:  ");
    scanf("%d", &n);

    backup = n;

    int d;
    conta = 0;
    while(n > 0){
        d = n % 10;
        n = n / 10;
        conta = conta + d;
    }

    n = backup;
    printf("\n\nConta: %06d-%d", n, conta);
    printf("\n\n");

    return 0;
}