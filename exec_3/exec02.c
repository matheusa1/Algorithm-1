#include <stdio.h>

int main(){
    int x;
    printf("\n\nDigite um número inteiro:\n\n");
    scanf("%d",&x);
    if( x % 2 == 0) {
        printf("\nPar\n");
    }
    else
    printf("\nImpar\n");

    return 0;
}