#include <stdio.h>

int main(){
    int x, par, imp, soma, qntd;
    float med;

    printf("\n\nDigite os valores desejados: \n");

    par, soma, qntd = 0;
    imp = 99999999;

    for(int i = 1; i != 0; i++){
        scanf("%d", &x);
        if(x == 0){
            break;
        }
        else{
            if(x % 2 == 0){
                qntd = qntd + 1;
                soma = soma + x;
            }
            if(x % 2 == 0 && x > par){
                par = x;
            }
            else{
                if(x < imp){
                    imp = x;
                }
            }
        }
    }
    med = soma / qntd;
    printf("\n\nMaior numero par digitado: %d\n", par);
    printf("Menor numero impar digitado: %d\n", imp);
    printf("Media dos numeros pares digitados: %.2f\n\n", med);
    printf("%d\n",soma);
    printf("%d",qntd);

    return 0;
}