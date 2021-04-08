#include <stdio.h>

int main(){
    int x, y;
    printf("\nDigite dois valores inteiros quaisquer\n");
    scanf("%d %d",&x,&y);
    if(x < 0 || y < 0){
        printf("Erro. Digite valores positivos!");
    }
    else
        if(x > y){
            printf("%d eh maior que %d!!", x, y);
        }
        else
            if(y > x){
                printf("%d eh maior que %d!!", y, x);
            }
            else
                printf("Os dois valores sao iguais!!");

    return 0;
}