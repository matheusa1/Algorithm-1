#include <stdio.h>

int main() {
    int x, y;
    printf("Digite dois numeros:");
    scanf("%d %d",&x,&y);
    printf("\nResto com operador: %d",x % y);
    printf("\nResto sem operador: %d",((((x / y) * y) - x) * (-1)));
    
    return 0;
}