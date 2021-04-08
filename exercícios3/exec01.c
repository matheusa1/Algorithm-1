#include <stdio.h>

int main() {
    int x;
    printf("Digite um numero inteiro de 0 a 9\n");
    scanf("%d",&x);

    if(x>=1 && x<10){
        if(x==0) {
        printf("Zero");
        }
        else
            if(x==1) {
                printf("Um");
            }
            else
                if(x==2) {
                    printf("Dois");
                    }
                else    
                    if(x==3) {
                        printf("Três");
                    }
                    else
                        if(x==4){
                            printf("Quatro");
                        }
                        else
                            if(x==5){
                                printf("Cinco");
                            }
                            else
                                if(x==6){
                                    printf("Seis");
                                }
                                else
                                    if(x==7){
                                        printf("Sete");
                                    }
                                    else
                                        if(x==8){
                                            printf("Oito");
                                        }
                                        else
                                        printf("Nove");
    }
    else {
        printf("Por favor, digite o que foi pedido!");
    }
    
    return 0;
    }