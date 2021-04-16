#include <stdio.h>

int main(){
    int x, soma, qntd, media;

    soma = 0;
    qntd = 0;
    media = 0;
    printf("\nDigite os valores desejados:\n");
    
    for(int i = 1; i =! 0; i++){
        scanf("%d", &x);
        if(x == 0){
            break;
        }
        else {
        soma = soma + x;
        qntd = qntd + 1;
        media = soma / qntd;
        }
    }
    printf("\nSoma: %d\n",soma);
    printf("Quantidade de numeros digitados: %d\n", qntd);
    printf("Media: %d\n\n",media);

    return 0;
}