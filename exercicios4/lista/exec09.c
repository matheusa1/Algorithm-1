#include <stdio.h>
#include <limits.h>

int main(){

    int n = 1;
    int men = INT_MAX;
    int mai = INT_MIN;

    printf("Informe os numeros desejados (0 para sair): ");

    while(n != 0){
        scanf("%d",&n);

        if(n > mai) {
            mai = n;
        }
        else
        if(n < men){
            men = n;
        }
    }

    printf("\nMaior valor: %d \nMenor valor: %d",mai, men);
    printf("\n\n");
    
    return 0;

}