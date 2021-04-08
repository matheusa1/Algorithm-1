#include <stdio.h>

int main(){
    char x;
    printf("Digite uma letra de a ate z:  ");
    scanf("%c",&x);
    if( x >= 'a' && x <= 'z'){
        printf("\nE uma letra!!\n");
    }
    else
        printf("Nao e letra!!");

    return 0;
}