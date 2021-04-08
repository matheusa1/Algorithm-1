#include <stdio.h>

int main() {
    int x, multi;
    multi = 1;
    printf("Digite o valor desejado:");
    scanf("%d",&x);
    while (multi <= 10) {
        printf("\n        %d  x  %d = %d\n",x , multi,  x * multi);
        multi++;
    }
} 