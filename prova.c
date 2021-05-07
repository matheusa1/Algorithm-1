#include <stdio.h>
#include <string.h>

void unShuffle(char str[]);
void simpleMerge(int n, int v1[n], int v2[n], int v3[2 * n]);
void matrixFill(int n, int matrix[n][n], int vet[n]);

int main() {
    char str[] = "abbabaabbbaabababbbbba";
    unShuffle(str);
    int vet1[4] = {1, 2, 3, 4};
    int vet2[4] = {10, 20, 30, 40};
    int vet3[8];
    simpleMerge(4, vet1, vet2, vet3);
    int mat[6][6];
    int vet[6] = {8, 2, 4, 7, 9, 6};
    matrixFill(6, mat, vet);
    return 0;
}

void unShuffle(char str[]) {
    char strAux[strlen(str)];
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a') {
            strAux[count] = str[i];
            count++;
        }
    }
    for(int i = 0; str[i] != '\0'; i++) {
        if(strAux[i] != 'a') strAux[i] = 'b';
    }
    for(int i = 0; str[i] != '\0'; i++) str[i] = strAux[i];
    printf("\n%s\n", str);
}

void simpleMerge(int n, int v1[n], int v2[n], int v3[2 * n]) {
    int count = 0;
    for(int i = 0; i < 2 * n; i++) {
        v3[count] = v1[i];
        count++;
        v3[count] = v2[i];
        count++;
    }
    printf("\n");
    for(int i = 0; i < (2 * n); i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");
}

void matrixFill(int n, int matrix[n][n], int vet[n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0) matrix[i][j] = vet[j];
            else matrix[i][j] = matrix[i - 1][j] + 1;
        }
    }
    printf("\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) printf("%02d ", matrix[i][j]);
        printf("\n");
    }
    printf("\n");
}