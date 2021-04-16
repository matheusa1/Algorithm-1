#include <stdio.h>

int main(){

    int n, soma, media;

    printf("Digite números inteiros para serem somados(0 para sair): \n");

    soma = 0;
    media = 0;
    for(int i = 1; i =! 0; i++ ){
        scanf("%d",&n);
        if(n == 0){
            break;
        }
        else
        soma = soma + n;
        media++;
    }

    printf("\nSoma: %d",soma);
    printf("\nMedia: %.2f",soma/(float)(media));

    printf("\n\n");

    return 0;
}