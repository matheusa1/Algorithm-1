#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

void exerciseSelection(int x);
void printMat(int rows, int cols, int m[rows][cols]);
void printMatReverse(int rows, int cols, int m[rows][cols]);
void printMinMax(int rows, int cols, int m[rows][cols]);
void findMaxMin(int rows, int cols, int m[rows][cols], int* max, int* min);
void initValues(int rows, int cols, int matrix[rows][cols], int start, int step);
void initRandom(int rows, int cols, int m[rows][cols], int min, int max);
int maxLine(int rows, int cols, int m[rows][cols]);
void findTotals(int rows, int cols, int m[rows][cols]);
int matrixEquals(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2]);
void sumMatrix(int rows, int cols, int m1[rows][cols], int m2[rows][cols], int m3[rows][cols]);
void transpose(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2]);
void multiply(int d, int m1[d][d], int m2[d][d], int res[d][d]);
void switchDiagonals(int d, int m[d][d]);
void pascalTriangle(int n);
int checkUpperTriangle(int d, int m[d][d]);
int checkIdentity(int rows, int cols, int m[rows][cols]);
int checkSimetry(int d, int m[d][d]);
void printStrings(int n, int len, char NameList[n][len]);
void printStringsMinMax(int n, int len, char nameList[n][len]);
int countWords(int n, int len, char lines[n][len]);
int countOcorrences(int n, int len, char lines[n][len], char word[]);

int main() {
    int boole = 1;
    int a;
    while(boole != 0) {
        printf("\nDigite o exercicio desejado: ");
        scanf("%d", &a);
        if(a <= 0) boole = 0;
        else exerciseSelection(a);
    }
    return 0;
}

void exerciseSelection(int x) {
    if(x == 1) {
        int mat[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        printMat(3, 3, mat);
    }
    if(x == 2) {
        int mat[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        printMatReverse(3, 3, mat);
    }
    if(x == 3) {
        int mat[3][3] = {
            {15, 36, -59},
            {14, 152, -999},
            {3, 0, 999}
        };
        printMinMax(3, 3, mat);
    }
    if(x == 4) {
        int max = INT_MIN;
        int min = INT_MAX;
        int mat[3][3] = {
            {15, 36, -59},
            {14, -5152, -999},
            {3, 0, 999}
        };
        findMaxMin(3, 3, mat, &max, &min);
        printf("\nMaior valor: %d", max);
        printf("\nManor valor: %d\n", min);
    }
    if(x == 5) {
        int m[4][4];
        initValues(4, 4, m, 10, 2);
    }
    if(x == 6) {
        int m[7][7];
        initRandom(7, 7, m, 10, 50);
    }
    if(x == 7) {
        int m[4][4] = {
            {1, 2, 3, 4},
            {15, 69, 58, 100},
            {154, 69, 33, 15},
            {15, 666, 5, 2}
        };
        printf("\nMaior soma: %d\n", maxLine(4, 4, m));
    }
    if(x == 8) {
        int m[4][5] = {
            {1, 2, 3, 4, 0},
            {2, 4, 6, 8, 0},
            {3, 6, 9, 12, 0},
            {4, 8, 12, 16, 0}
        };
        findTotals(4, 5, m);
    }
    if(x == 9) {
        int mat1[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        int mat2[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        int res = matrixEquals(3, 3, mat1, 3, 3, mat2);
        if(res == 1) printf("\nMatrizes iguais.\n");
        else printf("\nMatrizes diferentes\n");
    }
    if(x == 10) {
        int mat1[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        int mat2[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        int mat3[3][3];
        sumMatrix(3, 3, mat1, mat2, mat3);
    }
    if(x == 11) {
        int m1[2][3] = {
            {2, 1, 6},
            {3, 5, -6}
        };
        int m2[3][2];
        transpose(2, 3, m1, 3, 2, m2);
    }
    if(x == 12) {
        int m1[2][2] = {
            {1, 2},
            {3, 4}
        };
        int m2[2][2] = {
            {-1, 3},
            {4, 2}
        };
        int m3[2][2] = {0};
        multiply(2, m1, m2, m3);
    }
    if(x == 13) {
        int m[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        switchDiagonals(3, m);
    }
    if(x == 14) {
        pascalTriangle(6);
    }
    if(x == 15) {
        int matrix[3][3] = {
            {1, 2, 3},
            {0, 5, 6},
            {0, 0, 9}
        };
        if(checkUpperTriangle(3, matrix) == 1) printf("\nContem um triangulo superior.\n");
        else printf("\nNao contem um triangulo superior.\n");
    }
    if(x == 16) {
        int matrix[5][5] = {
            {1, 0, 0, 0, 0},
            {0, 1, 0, 0, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 1, 0},
            {0, 0, 0, 0, 1}
        };
        if(checkIdentity(5, 5, matrix) == 1) printf("\nEh matriz identidade.\n");
        else printf("\nNao eh matriz identidade.\n");
    }
    if(x == 17) {
        int matrix[3][3] = {
            {1, 2, 3},
            {2, 5, 6},
            {3, 6, 8}
        };
        if(checkSimetry(3, matrix) == 1) printf("\nEh Simetrico.\n");
        else printf("\nNao eh simetrico.\n");
    }
    if(x == 18) {
        char nameList[6][20] = {
            "Matheus",
            "Lucas",
            "Gabriel",
            "Pedrao",
            "Ana",
            "Pedrinho"
        };
        printStrings(6, 20, nameList);
    }
    if(x == 19) {
        char nameList[7][20] = {
            "Matheus",
            "Lucas",
            "Gabriel",
            "Pedrao",
            "Ana",
            "zeh",
            "Pedrinho"
        };
        printStringsMinMax(7, 20, nameList);
    }
    if(x == 20) {
        char v[2][200] = {
            "Computer programming is the process of designing and building an executable computer program for accomplishing a specific computing task.",
            "Programming involves tasks such as analysis, generating algorithms, profiling algorithms' accuracy and resource consumption, and the implementation of algorithms in a chosen programming language."
        };
        printf("\n%d eh o numero de palavras.\n", countWords(2, 200, v));
    }
    if(x == 21) {
        char v[5][200] = {
            "computer programming is the process of designing and building an executable computer program for accomplishing a specific computing task.",
            "programming involves tasks such as analysis, generating algorithms, profiling algorithms' accuracy and resource consumption, and the implementation of algorithms in a chosen programming language.",
            "the source code of a program is written in one or more programming languages.",
            "the purpose of programming is to find a sequence of instructions that will automate the performance of a task for solving a given problem.",
            "the process of programming thus often requires expertise in several different subjects, including knowledge of the application domain, specialized algorithms, and formal logic."
        };
        printf("\n%d eh o numero de vezes que a palavra aparece.\n",countOcorrences(5, 200, v, "algorithms"));
    }
}

//Imprime matriz.
void printMat(int rows, int cols, int m[rows][cols]) {
    printf("\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++) printf("%02d ", m[i][j]);
        printf("\n");
    }
}

void printMatReverse(int rows, int cols, int m[rows][cols]) {
    printf("\n");
    for(int i = rows - 1; i >= 0; i--) {
        for(int j = cols - 1; j >= 0; j--) printf("%d ",m[i][j]);
        printf("\n");
    }
}

void printMinMax(int rows, int cols, int m[rows][cols]) {
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(m[i][j] > max) max = m[i][j];
            if(m[i][j] < min) min = m[i][j];
        }
    }
    printf("\nMaior valor: %d", max);
    printf("\nManor valor: %d\n", min);
}

void findMaxMin(int rows, int cols, int m[rows][cols], int* max, int* min) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(m[i][j] > *max) *max = m[i][j];
            if(m[i][j] < *min) *min = m[i][j];
        }
    }
}

void initValues(int rows, int cols, int matrix[rows][cols], int start, int step) {
    int cont = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            matrix[i][j] = 10 + cont;
            cont = cont + 2;
        }
    }
    printMat(4, 4, matrix);
}

void initRandom(int rows, int cols, int m[rows][cols], int min, int max) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            m[i][j] = (rand() % 41) + 10;
        }
    }
    printMat(7, 7, m);
}

int maxLine(int rows, int cols, int m[rows][cols]) {
    int maxSum = INT_MIN;
    for(int i = 0; i < rows; i++) {
        int sum = 0;
        for(int j = 0; j < cols; j++) {
            sum = sum + m[i][j]; 
        }
        if(sum > maxSum) maxSum = sum;
    }
    return maxSum;
}

void findTotals(int rows, int cols, int m[rows][cols]) {
    printMat(4, 5, m);
    for(int i = 0; i < rows; i++) {
        int sum = 0;
        for(int j = 0; j < cols; j++) {
            if(j == cols - 1) m[i][j] = sum;
            else sum = sum + m[i][j];
        }
    }
    printMat(4, 5, m);
}

int matrixEquals(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2]) {
    int boole = 1;
    if(c1 == c2 && r1 == r2) {
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c1; j++) {
                if(m1[i][j] != m2[i][j]) boole = 0;
            }
        }
    }
    else boole = 0;
    return boole;
}

void sumMatrix(int rows, int cols, int m1[rows][cols], int m2[rows][cols], int m3[rows][cols]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printMat(3, 3, m3);
}

void transpose(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2]) {
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            m2[j][i] = m1[i][j];
        }
    }
    printMat(3, 2, m2);
}

void multiply(int d, int m1[d][d], int m2[d][d], int res[d][d]) {
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < d; j++) {
            res[i][j] = m1[i][0] * m2[0][j]  + m1[i][1] * m2[1][j];
        }
    }
    printMat(2, 2, res);
}

void switchDiagonals(int d, int m[d][d]) {
    int j = d - 1;
    for(int i = 0; i < d; i++) {
        int value = m[i][j];
        m[i][j] = m[i][i];
        m[i][i] = value;
        j--;
    }
    printMat(d, d, m); 
}

void pascalTriangle(int n) {
    int mat[n][n + 1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + 1; j++) {    
            if(j == 1 && i == 0) mat[i][j] = 1;
            else mat[i][j] = 0;
        }        
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n + 1; j++) {
            mat[i][j] = mat[i - 1][j - 1] + mat[i - 1][j];
        }
    }
    printMat(n, n + 1, mat);
}

int checkUpperTriangle(int d, int m[d][d]) {
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < d; j++) {
            if(m[i][j] != 0 && i > j) return 0;
        }
    }
    return 1;
}

int checkIdentity(int rows, int cols, int m[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if(j == i && m[i][j] != 1) return 0;
            if(i != j && m[i][j] != 0) return 0;
        }
    }
    return 1;
}

int checkSimetry(int d, int m[d][d]) {
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < d; j++) {
            if(m[i][j] != m[j][i]) return 0;
        }
    }
    return 1;
}

void printStrings(int n, int len, char NameList[n][len]) {
    for (int i = 0; i < n; i++) {
        printf("\n%s\n", NameList[i]);
    }
}

void printStringsMinMax(int n, int len, char nameList[n][len]) {
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        int size = strlen(nameList[i]);
        if(size > max) max = size;
        if(size < min) min = size;
    }
    printf("\nMaior: ");
    for (int i = 0; i < n; i++) {
        if(strlen(nameList[i]) == max) printf("%s ",nameList[i]);
    }
    printf("\nMenor: ");
    for (int i = 0; i < n; i++) {
        if(strlen(nameList[i]) == min) printf("%s ",nameList[i]);
    }
    printf("\n");
}

int countWords(int n, int len, char lines[n][len]) {
    int cont = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; lines[i][j] != '\0'; j++) {
            if(lines[i][j] == ' ') cont++;
        }
    }
    return cont + 2;
}

int countOcorrences(int n, int len, char lines[n][len], char word[]) {
    int x = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; lines[i][j] != '\0'; j++) {
            if(lines[i][j] == word[x]) x++;
            else x = 0;
            if(word[x] == '\0') count++;
        }
    }
    return count;
}