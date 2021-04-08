#include <stdio.h>

int main(){
    
    int n, i, c;
    
    i = 1;
    printf("Digite um valor inteiro: ");
    scanf("%d",&n);
    c = n;
    
    while(i <= n){
        printf("Linha %d \n",c);
        i++;
        c = c - 1;
    }

    return 0;
}