#include <stdio.h>

int main(){

    float a, b;
    char x;

    printf("\n\nDigite a expressão desejada. ex. 5 + 3\n");
    scanf("%f %c %f",&a,&x,&b);

    if(x == '+'){
        printf("\nResultado: %.2f",a + b);
    }
    else
    if(x == '-'){
        printf("\nResultado: %.2f",a - b);
    }
    else
    if(x == '*'){
        printf("\nResultado: %.2f",a * b);
    }
    else
    if(x == '/'){
        printf("\nResultado: %.2f",a / b);
    }
    else
    printf("Operador não suportado!");

    return 0;
}