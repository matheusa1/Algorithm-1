#include <stdio.h>

int main(){

    int n, i, y;

    printf("Digite o numero desejado: ");
    scanf("%d",&n);

    i = 1;
    y = 0;
    while(i < n){
        printf("%d + ", i);
        i++;
        y = y + i;
    }

    y = y + 1;
    printf("%d = %d",i, y);

    return 0;

}