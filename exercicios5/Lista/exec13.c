#include <stdio.h>

int main() {

    int n, som1, som2;
    som1, som2 = 0;
    printf("\n\nDigite o valor desejado: ");
    scanf("%d", &n);

    printf("A soma dos quadrados dos 10 primeiros numeros naturais eh:\n");
    for(int i = 1; i <= n; i++) {
        printf("%d² + ", i);
        som1 = (som1 + (i * i));
    }
    printf("\b\b");
    printf("= %d", som1);

    printf("\nO quadrado da soma dos 10 primeiros numeros naturais eh:\n");
    printf("(");
    for(int j = 1; j <= n; j++) {
        printf("%d + ", j);
        som2 = som2 + j;
    }
    printf("\b\b");
    printf(")² = %d² = %d", som2, som2 * som2);

    printf("\nA diferenca entre ambos eh:\n");
    printf("%d - %d = %d", som2 * som2, som1, (som2 * som2) - som1);

    printf("\n\n");
    return 0;
}