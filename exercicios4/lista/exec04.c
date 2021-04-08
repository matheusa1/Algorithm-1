#include <stdio.h>

int main(){

    int x, y, i;

    printf("Digite a quantidade de impares desejada: ");
    scanf("%d",&x);

    i = 1;
    y = 1;
    while(i <= x){
        printf(" %d \n",y);
        y = y + 2;
        i++;
    }
}