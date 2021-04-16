#include <stdio.h>
#include <limits.h>

void exerciseSelection(int x);
void printReverse(int x, int vet[x]);
void printEven(int x, int vet[x]);
void setPositive(int x, int vet[x]);
int sumValues(int x, int vet[x]);
int find(int x, int vet[x], int elem);
void findMaxMin(int x, int vet[x]);
void replaceAll(int x, int vet[x], int elem);
void reverse(int x, int vet[x]);
void readVector(int x, int vet[x]);

//Exercicio 7
//Exercicio 8

int main() {
    int a, exec, cont, boole;
    cont = 1;
    while(cont != 0) {
        boole = 1;
        printf("\n+------------------------------------+\n");
        printf("|       Qual exercicio deseja?       |\n");
        printf("|  0 para sair em qualquer exercicio |\n");
        printf("|  Caso exija varias entradas digite |\n");
        printf("|    0 em todas entradas para sair   |\n");
        printf("+------------------------------------+\n");
        printf("> ");
        scanf("%d", &exec);
        if(exec == 0 || exec > 19) cont = 0;
        else exerciseSelection(exec);
    }
    return 0;
}

//Seleciona o exercicio desejado.
void exerciseSelection(int x) {
    int a, b, cont1;
    cont1 = 0;
    int boole = 1;
    while(boole != 0) {
        printf("\n");
        if(x == 1) {
            printf("\nDigite o tamanho do vetor: ");
            scanf("%d", &a);
            int vet[a];
            if(a == 0) boole = 0;
            else {
                for(int i = 0; i < a; i++) vet[i] = i;
                printReverse(a, vet);
            }
        }
        if(x == 2) {
            printf("\nDigite o tamanho do vetor: ");
            scanf("%d", &a);
            int vet[a];
            if(a == 0) boole = 0;
            else {
                for(int i = 0; i < a; i++) vet[i] = i;
                printEven(a, vet);
            }
        }
        if(x == 3) {
            printf("\nDigite o tamanho do vetor: ");
            scanf("%d", &a);
            int vet[a];
            if(a == 0) boole = 0;
            else {
                if(x % 2 == 0) {
                    for(int i = -(a / 2); i < (a / 2); i++) {
                        vet[cont1] = i;
                        cont1++;
                    }
                }
                else {
                    for(int i = -(a / 2); i < (a / 2) + 1; i++) {
                        vet[cont1] = i;
                        cont1++;
                    }
                }
                cont1 = 0;
                setPositive(a, vet);
            }
        }
        if(x == 4) {
            printf("\nDigite o tamanho do vetor: ");
            scanf("%d", &a);
            int vet[a];
            if(a == 0) boole = 0;
            else {
                for(int i = 0; i < a; i++) vet[i] = i;
                printf("Media: %.2f", (sumValues(a, vet) / (float)(a)));
            }
        }
        if(x == 5) {
            printf("\nDigite o tamanho do vetor: ");
            scanf("%d", &a);
            int vet[a];
            if(a == 0) boole = 0;
            else {
                for(int i = 0; i < a; i++) vet[i] = i;
                printf("Digite o elemento a ser buscado: ");
                scanf("%d", &b);
                if(find(a, vet, b) == -1) printf("\nElemento nao encontrado.\n");
                else printf("\nElemento encontrado.\n");
            }
        }
        if(x == 6) {
            printf("\nDigite o tamanho do vetor: ");
            scanf("%d", &a);
            int vet[a];
            if(a == 0) boole = 0;
            else {
                for(int i = 0; i < x; i++) vet[i] = i + 1;
                findMaxMin(a, vet);
            }
        }
        if(x == 7) {
            printf("\nDigite o tamanho do vetor: ");
            scanf("%d", &a);
            int vet[a];
            if(a == 0) boole = 0;
            else {
                for(int i = 0; i < a; i++) vet[i] = i;
                printf("Digite o elemento a ser encontrado: ");
                scanf("%d", &b);
                replaceAll(a, vet, b);
            }
        }
        if(x == 8) {
            printf("\nDigite o tamanho do vetor: ");
            scanf("%d", &a);
            int vet[a];
            if(a == 0) boole = 0;
            else {
                for(int i = 0; i < a; i++) vet[i] = i + 1;
                reverse(a, vet);
            }
        }
        if(x == 9) {

        }
    }
}

//Imprime um vetor de trás para frente.
void printReverse(int x, int vet[x]) {
    for(int i = x - 1; i >= 0; i--) printf("%d ", vet[i]);
    printf("\n\n");
}

//Imprime os pares do vetor.
void printEven(int x, int vet[x]) {
    for(int i = 0; i < x; i++) {
        if(vet[i] % 2 == 0) printf("%d ", vet[i]);
    }
    printf("\n");
}

//Transorma os números negativos de um vetor em positivos.
void setPositive(int x, int vet[x]) {
    printf("Valores originais: ");
    for(int i = 0; i < x; i++) printf("%d ", vet[i]);
    printf("\nValores positivos: ");
    for(int i = 0; i < x; i++) {
        if(vet[i] < 0) vet[i] = -(vet[i]);
        printf("%d ",vet[i]);
    }
}

//Informa a media aritimetica dos valores contidos no vetor.
int sumValues(int x, int vet[x]) {
    int sum = 0;
    for(int i = 0; i < x; i++) {
        sum = sum + vet[i];
    }
    return sum;
}

//procura um elemento especifico do vetor.
int find(int x, int vet[x], int elem) {
    int cont = 1;
    for(int i = 0; i < x; i++) {
        if(vet[i] == elem) cont = 0;
    }
    if(cont == 1) return -1;
    else return 0;
}

void findMaxMin(int x, int vet[x]) {
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i < x; i++) {
        vet[i] = i + 1;
        if(vet[i] < min) min = vet[i];
        if(vet[i] > max) max = vet[i];
    }
    printf("\nValor maximo: %d\nValor minimo: %d\n", max, min);
}

//Troca o número desejado por -1.
void replaceAll(int x, int vet[x], int elem) {
    for(int i = 0; i < x; i++) {
        if(vet[i] == elem) vet[i] = -1;
    }
    for(int i = 0; i < x; i++) {
        printf("%d ", vet[i]);
    }
}

//Inverte as elementos.
void reverse(int x, int vet[x]) {
    int vet1[x];
    int cont = x - 1;
    printf("\nVetor original: ");
    for(int i = 0; i < x;i++) {
        printf("%d ", vet[i]);
    }
    for(int i = 0; i < x; i++) {
        vet1[i] = vet[cont];
        cont--;
    }
    printf("\nReverso do vetor: ");
    for(int i = 0; i < x; i++) {
        vet[i] = vet1[i];
        printf("%d ",vet[i]);
    } 
}

//Lê n numeros e coloca no vetor.
void readVector(int x, int vet[x]) {
    
}

