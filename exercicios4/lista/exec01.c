#include <stdio.h>

int main(){
    
    int n, i;
    
    i = 1;
    printf("Digite um valor inteiro: ");
    scanf("%d",&n);
    
    while(i <= n){
        printf("Linha %d \n",i);
        i++;
    }

    return 0;
}