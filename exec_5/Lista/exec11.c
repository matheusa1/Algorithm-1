#include <stdio.H>

int main () {
    int n, x;

    printf("Digite a quantidade de linhas desejadas: ");
    scanf("%d", &n);

    x = 1;
    int nums = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < nums; j++){
            printf ("%3d ", x);
            x = x + 1;
        }
        nums = nums + 1;
        printf("\n");
    }

    return 0;
}