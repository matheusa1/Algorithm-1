#include <stdio.h>

int main() {

    int A, B, i;

    i, A, B = 0;
    while(i != 5) {
        printf("\n");
        printf("--------------------------------------------------\n");
        printf("SUM SUPREME!                      A: %d B: %d     \n", A, B);
        printf("--------------------------------------------------\n");
        printf("1 - Set A \n2 - Set B \n3 - Show A+B \n4 - Show AxB \n5 - Exit \n");

        scanf("%d", &i);

        if(i == 1) {
            printf("\nValor desejado: ");
            scanf("%d", &A);
        }
        else {
            if(i == 2) {
                printf("\nValor desejado: ");
                scanf("%d", &B);
            }
            else{
                if(i == 3) {
                    printf("Soma: %d + %d = %d", A, B, A + B);
                }
                else {
                    if(i == 4) {
                        printf("Multiplicacao: %d x %d = %d", A, B, A * B);
                    }
                    else {

                        if(i == 5) {
                            break;
                        }
                        else {
                            printf("Erro! Digite um dos valores indicados.");
                        }
                    }
                }
            }
                
        }
    }
}