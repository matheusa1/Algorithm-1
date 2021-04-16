#include <stdio.h>

int main() {

    float x;

    printf("Digite um número decimal: ");
    scanf("%f",&x);
    printf("\n\nO número com 2 casas de precisão: %.2f\n",x);
    printf("A parte inteira: %d\n",(int)(x));
    printf("A parte fracionária: %f\n",x - (int)(x));
    printf("Sua representação em notação científica: %.5e", x);

    return 0;
}