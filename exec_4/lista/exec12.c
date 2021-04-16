#include <stdio.h>

int main() {

    int n;
    int bool = 1;

    printf("Digite o numero: ");
    scanf("%d",&n);

    int i = 2;
    while(i < n){
        if( n % i == 0){
            bool = 0;
            break;
        }
        i++;
    }

    if(bool == 1){
        printf("Eh primo");
    }
    else{
        printf("Nao eh primo");
    }

    return 0;
}