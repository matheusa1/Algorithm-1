#include <stdio.h>
#include <ctype.h>

int main(){
    char a;
    printf("\n\nDigite um letra:  ");
    scanf("%c",&a);
    if(isalpha(a)){
        a = toupper(a);
        printf("\nLetra digitada em caixa alta: %c", a);
    }
    else
    printf("Nao e letra");

    return 0;
}