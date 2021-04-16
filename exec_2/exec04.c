#include <stdio.h>

int main() {

    int a, b, c;
    printf("Digite o 3 valores:");
    scanf("%d %d %d",&a,&b,&c);
    printf("\n\nMédia aritmética: %.2f",(a + b + c)/3.0);
    printf("\n\nMédia aritmética: %.2f",((a * 0.1) + (b * 0.5) + (c * 0.4))/1.0);

    return 0;
}