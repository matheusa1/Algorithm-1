#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exerciseSelection(int x);
void printReverse(int x, int vet[x]);
void printEven(int x, int vet[x]);
void setPositive(int x, int vet[x]);
int sumValues(int x, int vet[x]);
int find(int x, int vet[x]);
void findMaxMin(int x, int vet[x]);
void replaceAll(int x, int vet[x], int elem);
void reverse(int x, int vet[x]);
void readVector(int x, int vet[x]);
void reverseInput(int x, int vet[x]);
void countElements(int x, int vet[x]);
void minBills(int x);
void distances(int x, int vet[x]);
void histogram(int days[]);
void tempReport(int days[]);
void defrag(int x, int vet[x]);
void vecUnion(int x1, int v1[x1], int x2, int v2[x2], int v3[]);

int main() {
    int a = 1;
    while(a > 0 && a < 20) {
        printf("\n\nQual exercicio deseja?(0 para sair): ");
        scanf("%d", &a);
        if(a > 0 && a < 20) exerciseSelection(a);
    }
    return 0;
}

//Seleciona o exercício.
void exerciseSelection(int x) {
    if(x == 1) {
        int vet[] = {15, 14, 2, 36, 59, 0};
        printf("\nVetor original: \n");
        for(int i = 0; i < 6; i++) printf("%d ", vet[i]);
        printReverse(6, vet);
    }
    if(x == 2) {
        int vet[] = {15, 14, 2, 36, 59, 0};
        printf("\nVetor original: \n");
        for(int i = 0; i < 6; i++) printf("%d ", vet[i]);
        printEven(6, vet);
    }
    if(x == 3) {
        int vet[] = {-10, 5, -30, 56, -562, -450};
        printf("\nVetor original: \n");
        for(int i = 0; i < 6; i++) printf("%d ", vet[i]);
        setPositive(6, vet);
    }
    if(x == 4) {
        int vet[] = {15, 4, 2, 36, 5};
        printf("\nVetor original: ");
        for(int i = 0; i < 6; i++) printf("%d ", vet[i]);
        printf("\nMedia: %d", sumValues(5, vet));
    }
    if(x == 5) {
        int vet[] = {-10, 5, -30, 56, -562, -450};
        printf("\nVetor original: \n");
        for(int i = 0; i < 6; i++) printf("%d ", vet[i]);
        int x = find(6, vet);
        if(x >= 0 && x < 6) printf("\nValor encontrado na posicao %d.", x);
        if(x == -1) printf("\nValor não encontrado.");
    }
    if(x == 6) {
        int vet[] = {-10, 5, -30, 56, -562, -450, 500};
        printf("\nVetor original: \n");
        for(int i = 0; i < 6; i++) printf("%d ", vet[i]);
        findMaxMin(7, vet);
    }
    if(x == 7) {
        int a = 1;
        int vet[] = {-10, 5, -30, 56, -562, -450, 500};
        printf("\nVetor original: \n");
        for(int i = 0; i < 6; i++) printf("%d ", vet[i]);
        while(a != 0) {
            printf("\\nnDigite o elemento a ser buscado(0 para sair): ");
            scanf("%d", &a);
            replaceAll(7, vet, a);
            printf("\nNovo Vetor: \n");
            for(int i = 0; i < 6; i++) printf("%d ", vet[i]);
        }
    }
    if(x == 8) {
        int vet[] = {3, 4, 96, 56, 45, 2, 0, 98, 36, 58};
        reverse(10, vet);
    }
    if(x == 9) {
        int a;
        printf("\nDigite o tamanho do vetor desejado: ");
        scanf("%d", &a);
        int vet[a];
        readVector(a, vet);
    }
    if(x == 10) {
        int a;
        printf("\nDigite o tamanho do vetor desejado: ");
        scanf("%d", &a);
        int vet[a];
        reverseInput(a, vet);
    }
    if(x == 11) {
        int vet[] = {1, 2, 1, 3, 6, 3, 5, 2, 4, 9, 8, 3, 5, 6, 7};
        countElements(15, vet);
    }
    if(x == 12) {
        int a;
        printf("\nDigite o valor: ");
        scanf("%d", &a);
        minBills(a);
    }
    if(x == 13) {
        int vet[] = {1, 2, 3, 4, 5, 6};
        printf("\np1: (1, 2)\np2 = (3, 4)\np3 = (5, 6)");
        distances(6, vet);
    }
    if(x == 14) {
        int vet[] = {19, 21, 25, 22, 20, 17, 15};
        histogram(vet);
    }
    if(x == 15) {
        int vet[] = {19, 21, 25, 22, 20, 17, 15};
        tempReport(vet);
    }
    if(x == 16) {
        int vet[] = {1, 6, -1, 9, 4, -1, -1, 2, -1};
        defrag(9, vet);
    }
    if(x == 18) {
        int vet1[5] = {1,2,3,4,5};
        int vet2[3] = {2,3,8};
        int vet3[8] = {0};
        vecUnion(5, vet1, 3, vet2, vet3);
    }
}
//Imprime o veto de trás para frente.
void printReverse(int x, int vet[x]) {
    printf("\nVetor invertido: \n");
    for(int i = x - 1; i >= 0; i--) printf("%d ", vet[i]);
}
//Imprime apenas os números pares do vetor
void printEven(int x, int vet[x]) {
    printf("\nApenas os numeros pares: \n");
    for(int i = 0; i < x; i++) {
        if(vet[i] % 2 == 0) printf("%d ", vet[i]);
    }
}
//Transforma todos os números em  positivos.
void setPositive(int x, int vet[x]) {
    printf("\nNovo vetor: \n");
    for(int i = 0; i < x; i++) {
        if(vet[i] < 0) vet[i] = -(vet[i]);
        printf("%d ", vet[i]);
    }
}
//Devolve a media aritimetica.
int sumValues(int x, int vet[x]) {
    int sum = 0;
    for(int i = 0; i < x; i++) sum = sum + vet[i];
    return (sum / x);
}
//Procura um elemento especifico de um vetor.
int find(int x, int vet[x]) {
    int a;
    printf("\nQual termo deseja procurar?\n> ");
    scanf("%d", &a);
    for(int i = 0; i < x; i++) {
        if(vet[i] == a) return i;
    }
    return -1;
}
//Procura o valor máximo e o mínimo.
void findMaxMin(int x, int vet[x]) {
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i < x; i++) {
        if(vet[i] > max) max = vet[i];
        if(vet[i] < min) min = vet[i];
    }
    printf("\nValor maximo: %d\nValor minimo: %d", max, min);
}
//Procura e substitui um elemento por -1;
void replaceAll(int x, int vet[x], int elem) {
    int position = -1;
    for(int i = 0; i < x; i++) {
        if(vet[i] == elem) position = i;
    }
    if(position == -1) printf("\nValor não encontrado.");
    else vet[position] = -1;
}
//Imprime o reverso do vetor.
void reverse(int x, int vet[x]) {
    int vet1[x];
    int cont = x - 1;
    printf("\nVetor original: ");
    for(int i = 0; i < x; i++) {
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
//Coloca numeros inteiros em um vetor.
void readVector(int x, int vet[x]) {
    int a;
    printf("\nDigite numeros inteiros consecutivos: \n");
    for(int i = 0; i < x; i++) {
        printf("%d / %d.  > ", i + 1, x);
        scanf("%d", &a);
        vet[i] = a;
    }
    printf("\nVetor: ");
    for(int i = 0; i < x; i++) printf("%d ", vet[i]);
}
//Coloca numeros inteiros em um vetor e os imprime de trás para frente.
void reverseInput(int x, int vet[x]) {
    int a;
    printf("\nDigite numeros inteiros consecutivos: \n");
    for(int i = 0; i < x; i++) {
        printf("%d / %d.  > ", i + 1, x);
        scanf("%d", &a);
        vet[i] = a;
    }
    printf("\nVetor: ");
    for(int i = x - 1; i >= 0; i--) printf("%d ", vet[i]);
}
//Verifica a quantidade de elementos de um vetor.
void countElements(int x, int vet[x]) {
    int cont[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for(int i = 0; i < x; i++) {
         if(vet[i] == 0) cont[0]++; 
         if(vet[i] == 1) cont[1]++; 
         if(vet[i] == 2) cont[2]++; 
         if(vet[i] == 3) cont[3]++; 
         if(vet[i] == 4) cont[4]++; 
         if(vet[i] == 5) cont[5]++; 
         if(vet[i] == 6) cont[6]++; 
         if(vet[i] == 7) cont[7]++; 
         if(vet[i] == 8) cont[8]++; 
         if(vet[i] == 9) cont[9]++; 
    }
    for(int i = 0; i < 10; i++) printf("\nQuantidade de %d: %d", i, cont[i]);
}
//Faz uma conta de troco.
void minBills(int x) {
    int bills[5] = {1, 5, 10, 50, 100};
    int count[5] = {0, 0, 0, 0, 0};
    while(x >= bills[4]) {
        count[4]++;
        x = x - bills[4];
    }
    while(x >= bills[3]) {
        count[3]++;
        x = x - bills[3];
    }
    while(x >= bills[2]) {
        count[2]++;
        x = x - bills[2];
    }
    while(x >= bills[1]) {
        count[1]++;
        x = x - bills[1];
    }
    while(x >= bills[0]) {
        count[0]++;
        x = x - bills[0];
    }
    printf("\nNotas de 1: %d\nNotas de 5: %d\nNotas de 10: %d\nNotas de 50: %d\nNotas de 100: %d\n", count[0], count[1], count[2], count[3], count[4]);
}
//Diz a distância entre os pontos informados.
void distances(int x, int vet[x]) {
    float d12, d13, d23;
    d12 = sqrt((vet[2] - vet[0])*(vet[2] - vet[0])+(vet[3] - vet[1])*(vet[3] - vet[1]));  
    d13 = sqrt((vet[4] - vet[0])*(vet[4] - vet[0])+(vet[5] - vet[1])*(vet[5] - vet[1]));  
    d23 = sqrt((vet[4] - vet[2])*(vet[4] - vet[2])+(vet[5] - vet[3])*(vet[5] - vet[3]));
    printf("\nDistancia entre p1 e p2: %.2f\nDistancia entre p1 e p3: %.2f\nDistancia entre p2 e p3: %.2f", d12, d13, d23);
}
//Imprime a temperatura em forma de grafico de >;
void histogram(int days[]) {
    for(int i = 0; i < 7; i++) {
        if(i == 0) printf("\nD: ");
        if(i == 1) printf("\nS: ");
        if(i == 2) printf("\nT: ");
        if(i == 3) printf("\nQ: ");
        if(i == 4) printf("\nQ: ");
        if(i == 5) printf("\nS: ");
        if(i == 6) printf("\nS: ");
        for(int j = 0; j < days[i]; j++) {
            printf(">");
        }
    }
}
//Informa a media, a maxima e minima e o histograma.
void tempReport(int days[]) {
    int max = INT_MIN;
    int min = INT_MAX;
    printf("\nTemperatura media semanal: %.2f", (days[0] + days[1] + days[2] + days[3] + days[4] + days[5] + days[6]) / 7.0);
    for(int i = 0; i < 7; i++) {
        if(days[i] > max) max = days[i];
        if(days[i] < min) min = days[i];
    }
    printf("\nMaxima: %d\nMinima: %d", max, min);
    histogram(days);
}
//desfragmenta o vetor.]
void defrag(int x, int vet[x]) {
    int vetAux[x];
    int cont = 0;
    printf("\nVetor original: ");
    for(int i = 0; i < x; i++) printf("%d ",vet[i]);
    for(int i = 0; i < x; i++) {
        if(vet[cont] != -1) vetAux[i] = vet[cont];
        else {
            cont++;
            if(vet[cont] != -1) vetAux[i] = vet[cont];
            else
            if(vet[cont + 1] != -1) vetAux[i] = vet[cont + 1];
        }
        cont++;
    }
    for(int i = 5; i < x; i++) vetAux[i] = -1;
    for(int i = 0; i < x; i++) vet[i] = vetAux[i];
    printf("\nVetor arrumado: ");
    for(int i = 0; i < x; i++) printf("%d ", vet[i]);
}
//Coloca 2 vetores dentro de um terceiro.
void vecUnion(int x1, int v1[x1], int x2, int v2[x2], int v3[]) {
    int cont = 0;
    for(int i = 0; i < x1; i++) v3[i] = v1[i];
    
    printf("\nVetor unido:");
    for(int i = 0; i < 8; i++) printf("%d ", v3[i]);
}