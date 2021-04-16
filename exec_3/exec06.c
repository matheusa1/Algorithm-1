#include <stdio.h>

int main(){

    int x;

    printf("Digite um numero natural de ate 5 digitos: ");
    scanf("%d",&x);

    if(x < 0 || x > 99999){
        printf("\nNumero invalido\n");
    }
    else{
        int d1 = x % 10; x = x / 10;
        int d2 = x % 10; x = x / 10;
        int d3 = x % 10; x = x / 10;
        int d4 = x % 10; x = x / 10;
        int d5 = x % 10;
        int soma = d1 + d2 + d3 + d4 + d5;
        printf("\n\n %d + %d + %d + %d + %d = %d", d5, d4, d3, d2, d1, soma);
    }
    printf("\n\n");

    return 0;
    
    }

    