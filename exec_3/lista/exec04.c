#include <stdio.h>

int main(){
    int x;
    printf("Digite um ano: ");
    scanf("%d",&x);
    if(x % 4 == 0){
        printf("\nO ano eh bissexto!!\n");
    }
    else
        printf("\nO ano nao e bissexto!!\n");

    return 0;
}