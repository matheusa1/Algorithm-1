#include <stdio.h>

int main(){

    int n, p;
    printf("Digite a casa desejada: n = ");
    scanf("%d", &n);
    
    p = 0;
    for(int i = 0; i < n; i++){
        p = p + 2;
        printf("%d, ", p);
    }
    printf("\b\b \n\n");

    return 0;
}