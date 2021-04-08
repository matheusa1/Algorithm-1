#include <stdio.h>
#include <stdlib.h>

void prime();
void printRand();
void printRand2();
void summation();
void factorialSum();
void isPerfectNum();
void numInFull10();
void numInFull100();
void numInFull100Aux(int x);
void printLine();
void printBoxCustom();
void printBoxFilled();
void printBox01();

int main(){
    int exec, cont;
    cont = 1;
    while (cont != 0){
        printf("\n+------------------------------------+\n");
        printf("|       Qual exercicio deseja?       |\n");
        printf("|  0 para sair em qualquer exercicio |\n");
        printf("+------------------------------------+\n");
        printf("> ");
        scanf("%d", &exec);

        if(exec == 0) cont = 0;
        if(exec == 1) prime();
        if(exec == 2) printRand();
        if(exec == 3) printRand2();
        if(exec == 4) summation();
        if(exec == 5) factorialSum();
        /////////////////////////////////////
        if(exec == 7) isPerfectNum();
        if(exec == 8) numInFull10();
        if(exec == 9) numInFull100();
        /////////////////////////////////////
        if(exec == 11) printLine();
        if(exec == 12) printBoxCustom();
        if(exec == 13) printBoxFilled();
        if(exec == 14) printBox01();
    }
    return 0;
}

// Verifica se o numero é primo.
void prime() {
    int n, cont1, boole;
    boole = 1; cont1 = 1;
    while(cont1 != 0) {
        printf("\n\nDigite um numero inteiro positivo: ");
        scanf("%d",&n);
        if(n == 0) cont1 = 0;
        else{
            if(n < 0) {
                printf("\nValor invalido!\n");
            }
            else{
                for (int i = 2; i < n; i++) {
                    if(n % i == 0) {
                        boole = 0;
                        break;
                    }
                }
                if(boole == 1) printf("\nEh primo.");
                else printf("\nNao eh primo.");   
            }
        }
    }
}

// Imprime a quantidade de números aleatórios desejados.
void printRand() {
    int a, b, num;
    printf("\ndigite a quantidade de numeros desejados e o limite: ");
    scanf("%d %d", &a, &b);
    for(int i = 0; i < a; i++) {
        num = rand() % b + 1;
        printf("%d ",num);
    }
    printf("\n\n");
}

// Imprime números aleatórios negativos e positivos.
void printRand2() {
    int a, b, num, j;
    printf("\ndigite a quantidade de numeros desejados e o limite: ");
    scanf("%d %d", &a, &b);
    for(int i = 0; i < a; i++) {
        num = rand() % b + 1;
        j = (rand() % 2) + 1;
        if(j == 1) printf("-");
        printf("%d ",num);
    }
    printf("\n\n");
}

// Somatório.
void summation(){
    int a, sum;
    sum = 0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &a);
    for(int i = 1; i <= a; i++) {
        printf("%d + ", i);
        sum = sum + i;
    }
    printf("\b\b= %d", sum);
}

//Somatório de fatorial
void factorialSum(){
    int a, sum, fact, cont5;
    sum = 0;
    fact = 1;
    cont5 = 1;
    while(cont5 != 0){
        printf("\nDigite um numero inteiro positivo: ");
        scanf("%d", &a);  
        if(a == 0) cont5 = 0;
        else {
            for(int i = 1; i <= a; i++) {
                printf("%d! + ", i);
                for(int j = 1; j <= i; j++){
                    fact = fact * j;
                }
                sum = sum + fact;
                fact = 1;
            }
            printf("\b\b= %d\n", sum);
        }
    }
}

void factorialSum2(){
    int a, sum, fact;
    sum = 0;
    fact = 1;
    printf("\nDigite um valor inteiro positivo: ");
    scanf("%d", &a);
    for(int i = 1; i < a; i++) {

    }

}

// Verifica se o número é perfeito.
void isPerfectNum() {
    int a, sum, cont7;
    cont7 = 1;
    while (cont7 != 0) {
        printf("Digite o valor a ser analisado: ");
        scanf("%d", &a);
        if(a == 0) {
            cont7 = 0;
        }
        else {
            sum = 0;
            for(int i = 1; i < a; i++) {
                if(a % i == 0) {
                    sum = sum + i;
                }
            }
            if(sum == a) {
                printf("\nEh um numero perfeito\n");
            }    
            else printf("\nNao eh numero perfeito\n");
        }
    }
}

//Imprime o número entre -10 e 10 em extenso.
void numInFull10() {
    int a, cont8;
    cont8 = 1;
    while (cont8 != 0) {
        printf("Digite um número entre -10 e 10: ");
        scanf("%d", &a);
        if(a == 0) {
            printf("Zero");
            cont8 = 0;
        }
        else {
            if(a < 0) {
                printf("Menos ");
                a = -(a);
            }
            if(a == 1) printf("Um");
            if(a == 2) printf("Dois");
            if(a == 3) printf("Tres");
            if(a == 4) printf("Quatro");   
            if(a == 5) printf("Cinco");
            if(a == 6) printf("Seis");
            if(a == 7) printf("Sete");
            if(a == 8) printf("Oito");
            if(a == 9) printf("Nove");
            if(a == 10) printf("Dez");
        }
    }
}

//Auxilia a função numInFull100
void numInFull100Aux(int x){
    if(x == 1) printf("Um");
    if(x == 2) printf("Dois");
    if(x == 3) printf("Tres");
    if(x == 4) printf("Quatro");   
    if(x == 5) printf("Cinco");
    if(x == 6) printf("Seis");
    if(x == 7) printf("Sete");
    if(x == 8) printf("Oito");
    if(x == 9) printf("Nove");
}
//Imprime o número entre -100 e 100 em extenso.
void numInFull100(){
    int a, cont9;
    cont9 = 1;
    while(cont9 != 0) {
        printf("\nDigite um numero entre -100 e 100: ");
        scanf("%d", &a);
        if(a == 0) {
            printf("Zero");
            cont9 = 0;
        }
        else {
            if(a < 0) {
                printf("Menos ");
                a = -(a);
            }
            if(a == 100) printf("Cem");
            if(a > 0  && a < 10){
                numInFull100Aux(a);
            }
            if(a >= 10 && a < 20) {
                if(a == 10) printf("Dez");
                if(a == 11) printf("Onze");
                if(a == 12) printf("Doze");
                if(a == 13) printf("Treze");
                if(a == 14) printf("Quatorze");
                if(a == 15) printf("Quinze");
                if(a == 16) printf("Dezesseis");
                if(a == 17) printf("Dezesste");
                if(a == 18) printf("Dezoito");
                if(a == 19) printf("Dezenove");
            }
            if(a >= 20 && a < 30) {
                printf("Vinte");
                if(a > 20) printf(" e ");
                a = a - 20;
                numInFull100Aux(a);
            }
            if(a >= 30 && a < 40) {
                printf("Trinta");
                if(a > 30) printf(" e ");
                a = a - 30;
                numInFull100Aux(a);
            }
            if(a >= 40 && a < 50) {
                printf("Quarenta");
                if(a > 40) printf(" e ");
                a = a - 40;
                numInFull100Aux(a);
            }
            if(a >= 50 && a < 60) {
                printf("Cinquenta");
                if(a > 50) printf(" e ");
                a = a - 50;
                numInFull100Aux(a);
            }
            if(a >= 60 && a < 70) {
                printf("Sessenta");
                if(a > 60) printf(" e ");
                a = a - 60;
                numInFull100Aux(a);
            }
            if(a >= 70 && a < 80) {
                printf("Setenta");
                if(a > 70) printf(" e ");
                a = a - 70;
                numInFull100Aux(a);
            }
            if(a >= 80 && a < 90) {
                printf("Oitenta");
                if(a > 80) printf(" e ");
                a = a - 80;
                numInFull100Aux(a);
            }
            if(a >=90 && a < 100) {
                printf("Noventa");
                if(a > 90) printf(" e ");
                a = a - 90;
                numInFull100Aux(a);
            }
        }
    }
    printf("\n");
}

// Imprime uma linha customizada.
void printLine() {
    int a;
    char charFill, charEdge;
    printf("Digite a largura da linha, o caractere de preenchimento e o caractere das pontas: ");
    scanf("%d %c %c", &a, &charFill, &charEdge);

    printf("%c", charEdge);
    for(int i = 0; i < a - 2; i++) {
        printf("%c", charFill);
    }
    printf("%c \n", charEdge);
}

// Imprime uma caixa customizada.
void printBoxCustom() {
    int height, width;
    char fill, edge;
    printf("Digite a altura e a largura, o caractere de preenchimento e o caractere das pontas: ");
    scanf("%d %d %c %c", &height, &width, &fill, &edge);

    printf("%c",edge);
    for(int i = 0; i < width - 2; i++) {
        printf(" -");
    }
    printf(" %c \n",edge);
    for(int j = 0; j < height; j++) {
        printf("|");
        for(int k = 0; k < width - 2; k++) {
            printf(" %c", fill);
        }
        printf(" | \n");
    }
    printf("%c",edge);
    for(int i = 0; i < width - 2; i++) {
        printf(" -");
    }
    printf(" %c \n",edge);
}

// Imprime uma caixa preenchida com apenas um laço
void printBoxFilled() {
    int height, width, cont;
    char ch;
    printf("Digite a altura, comprimento da caixa e o caractere a ser preenchido: ");
    scanf("%d %d %c", &height, &width, &ch);

    cont = 1;
    for(int i = 0; i < height * width; i++) {
        printf("%c ", ch);
        if(cont == width) {
            printf("\n");
            cont = 0;
        }
        cont++;
    }
}

//imprime a caixa malhada.
void printBox01() {
    int height, width;
    printf("Digite a altura e a largura: ");
    scanf("%d %d", &height, &width);

    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            printf("X");
        }
        printf("\n");
    }
}