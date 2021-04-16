#include <stdio.h>

int main() {

    int a, b;
    printf("Digite dois numeros inteiros:\n\n");
    scanf("%d %d",&a,&b);
    printf("Multiplicação: %d\n",a*b);
    printf("Divisão inteiro: %d\n",a/b);
    printf("Divisão real: %.2f\n\n\n",(float)(a) / b);

 
    return 0;
}