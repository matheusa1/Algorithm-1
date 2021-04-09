#include <stdio.h>
#include <stdlib.h>

int isPrime(int x);
void printRandom(int x, int y);
void printRandom2(int x, int y);
void summation(int x);
void factoriaSum(int x);
///////////////////////////// exec 6
int isPerfectNumber(int x);
void numbersInFull10(int x);
void numbersInFull100(int x);
///////////////////////////////////// exec 10
void printLine(int x, char fill, char edge);
void printCustomBox(int height, int width, char fill, char edge);
void printBoxFilled(int height, int width, char fill);
void printBox01(int height, int width);
void printBox02(int height, int width);
void printPregressiveBox(int lim, int height, int width);
void batchReport(int num, int* max, int* min);
void randReport(int max, int *evenSum, int *primes);


int main() {
    int exec, cont, boole, a, b, c, defin;
    char fill, edge;
    cont = 1;
    while (cont != 0){
        cont = 1;
        boole = 1;
        printf("\n+------------------------------------+\n");
        printf("|       Qual exercicio deseja?       |\n");
        printf("|  0 para sair em qualquer exercicio |\n");
        printf("|  Caso exija varias entradas digite |\n");
        printf("|    0 em todas entradas para sair   |\n");
        printf("+------------------------------------+\n");
        printf("> ");
        scanf("%d", &exec);

        if(exec == 0) cont = 0;
        if(exec == 1) {
            while(boole != 0) {
                printf("\nDigite um numero inteiro positivo: ");
                scanf("%d", &a);
                if(a == 0) boole = 0;
                defin = isPrime(a);
                if(defin == 0) printf("\nNao e primo");
                if(defin == 1) printf("\nEh primo");
                if(defin == 2) printf("\nValor inválido!");
            }
        }
        if(exec == 2) {
            while(boole != 0) {
                printf("Digite a quantidade de numeros desejados e o limete: ");
                scanf("%d %d", &a, &b);
                if(a == 0 && b == 0) boole = 0;
                else printRandom(a, b);
            }
        }
        if(exec == 3) {
            while(boole != 0) {
                printf("Digite a quantidade de numeros desejados e o limete: ");
                scanf("%d %d", &a, &b);
                if(a == 0 && b == 0) boole = 0;
                else printRandom2(a, b);
            }
        }
        if(exec == 4) {
            while(boole != 0) {
                printf("digite um numero positivo inteiro: ");
                scanf("%d", &a);
                if(a == 0) boole = 0;
                else summation(a);
            }
        }
        if(exec == 5) {
            while(boole != 0) {
                printf("digite um numero positivo inteiro: ");
                scanf("%d", &a);
                if(a == 0) boole = 0;
                else factoriaSum(a);
            }
        }
        /////////////////////////////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////////////////////
        if(exec == 7) {
            while(boole != 0) {
                printf("Digite um numero inteiro positivo: ");
                scanf("%d", &a);
                if(a == 0) boole = 0;
                else{
                    defin = isPerfectNumber(a);
                    if(defin == 1) printf("\nEh um numero perfeito\n\n");
                    if(defin == 0) printf("\nNao eh numero perfeito\n\n");
                }
            }
        }
        if(exec == 8) {
            while(boole != 0) {
                printf("Digite um numero de -10 a 10: ");
                scanf("%d", &a);
                if(a == 0) {
                    printf("\nZero\n\n");
                    boole = 0;
                }
                else {
                    printf("\n");
                    numbersInFull10(a);
                }
            }
        }
        if(exec == 9) {
            while(boole != 0) {
                printf("Digite um numero de -100 a 100: ");
                scanf("%d", &a);
                if(a == 0) {
                    printf("\nZero\n\n");
                    boole = 0;
                }
                else {
                    printf("\n");
                    numbersInFull100(a);
                }
            }
        }
        /////////////////////////////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////////////////////
        /////////////////////////////////////////////////////////////////////////////////////////////
        if(exec == 11) {
            while(boole != 0) {
                printf("Digite a quantidade de linhas, o caracatere de preenchimento e o caracatere de borda: ");
                scanf("%d %c %c", &a, &fill, &edge);
                if(a == 0 && fill == '0' && edge == '0') boole = 0;
                else {
                    printf("\n");
                    printLine(a, fill, edge);
                }
            }
        }
        if(exec == 12) {
            while(boole != 0) {
                printf("Digite a altura, a largura, o caracatere de preenchimento e o caractere da borda: ");
                scanf("%d %d %c %c", &a, &b, &fill, &edge);
                if(a == 0 && b == 0 && fill == '0' && edge == '0') boole = 0;
                else {
                    printf("\n");
                    printCustomBox(a, b, fill, edge);
                }
            }
        }
        if(exec == 13) {
            while(boole != 0) {
                printf("Digite a altura, a largura e o caractere de preenchimento: ");
                scanf("%d %d %c", &a, &b, &fill);
                if(a == 0 && b == 0 && fill == '0') boole = 0;
                else {
                    printf("\n");
                    printBoxFilled(a, b, fill);
                }
            }
        }
        if(exec == 14) {
            while(boole != 0) {
                printf("Digite a altura e a largura: ");
                scanf("%d %d", &a, &b);
                if(a == 0 && b == 0) boole = 0;
                else {
                    printf("Digite qual função deseja\nCom um laco - 1\nCom dois lacos - 2\n> ");
                    scanf("%d", &c);
                    if(c == 1) {
                        printf("\n");
                        printBox02(a, b);
                    }
                    if(c == 2) {
                        printf("\n");
                        printBox01(a, b);
                    }
                }
            }
        }
        if(exec == 15) {
            while(boole != 0) {
                printf("Digite o limite, a altura e a largura: ");
                scanf("%d %d %d",&a, &b, &c);
                if(a == 0 && b == 0 && c == 0) boole = 0;
                else {
                    printf("\n");
                    printPregressiveBox(a, b, c);
                }
            }
        }
        if(exec == 16) {
            a = INT_MAX;
            b = INT_MIN;
            printf("Digite numeros consecutivos(0 para sair): ");
            while(boole != 0) {    
                scanf("%d", &c);
                if(c == 0) boole = 0;
                else {
                    batchReport(c, &a, &b);
                }
            }
            printf("\nMaior numero: %d\n", b);
            printf("Menor numero: %d\n\n", a);
        }
        if(exec == 17) {
            int sum, primes;
            while(boole != 0) {
                printf("Digite a quantidade de numeros desejados: ");
                scanf("%d", &a);
                if(a == 0) boole = 0;
                else {
                    printf("\n");
                    randReport(a, &sum, &primes);
                    printf("\n\nSoma dos numeros pares: %d\nNumero de primos: %d\n\n", sum, primes);
                }
            }
        }
    }
    return 0;
}

// Diz se o número é primo.
int isPrime(int x) {
    int comp = 2;
    if(x < 0) return 2;
    else {
        for(int i = 2; i < x; i++){
            if(x % i == 0) {
                comp = 1;
                break;
            }
        }
        if(comp == 1) return 0;
        if(comp == 2) return 1;
    }
}

//Imprima uma quantidade de números aleatórios.
void printRandom(int x, int y) {
    int num;
    for(int i = 0; i < x; i++) {
        num = rand() % y + 1;
        printf("%d ",num);
    }
    printf("\n");
}

//Imprima uma quantidade de números aleatórios, tanto positivos quanto negativos.
void printRandom2(int x, int y) {
    int num, sinal;
    for(int i = 0; i < x; i++) {
        num = rand() % y + 1;
        sinal = (rand() % 2) + 1;
        if(sinal == 1) printf("-");
        printf("%d ",num);
    }
    printf("\n");
}

//Imprime a somatória de um número inteiro positivo.
void summation(int x) {
    int sum = 0;
    for(int i = 1; i <= x; i++) {
        printf("%d + ", i);
        sum = sum + i;
    }
    printf("\b\b= %d\n", sum);
}

//Imprime a sumatóra de fatorial.
void factoriaSum(int x) {
    int sum = 0;
    int fact = 1;
    for(int i = 1; i <= x; i++) {
        printf("%d! + ", i);
        for(int j = 1; j <= i; j++) {
            fact = fact * j;
        }
        sum = sum + fact;
        fact = 1;
    }
    printf("\b\b= %d\n",sum);
}
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

//Imprime se o número é perfeito.
int isPerfectNumber(int x) {
    int sum = 0;
    for(int i = 1; i < x; i++) {
        if(x % i == 0) sum = sum + i;
    }
    if(sum == x) return 1;
    else return 0;
}

//Imprime um número entre -10 e 10 por extenso.
void numbersInFull10(int x) {
    if(x < 0) {
        printf("Menos ");
        x = -(x);
    }
    
    if(x == 1) printf("Um\n\n");
    if(x == 2) printf("Dois\n\n");
    if(x == 3) printf("Tres\n\n");
    if(x == 4) printf("Quatro\n\n");
    if(x == 5) printf("Cinco\n\n");
    if(x == 6) printf("Seis\n\n");
    if(x == 7) printf("Sete\n\n");
    if(x == 8) printf("Oito\n\n");
    if(x == 9) printf("Nove\n\n");
    if(x == 10) printf("Dez\n\n");
}

//Imprime um número entre -100 e 100 por extenso.
void numbersInFull100(int x) {
    if(x < 0) {
        printf("Menos ");
        x = -(x);
    }
    if(x > 0 && x <= 10) numbersInFull10(x);
    if(x > 10 && x < 20) {
        if(x == 11) printf("Onze\n\n");
        if(x == 12) printf("Doze\n\n");
        if(x == 13) printf("Treze\n\n");
        if(x == 14) printf("Quatorze\n\n");
        if(x == 15) printf("Quinze\n\n");
        if(x == 16) printf("Dezesseis\n\n");
        if(x == 17) printf("Dezessete\n\n");
        if(x == 18) printf("Dezoito\n\n");
        if(x == 19) printf("Dezenove\n\n");
    }
    if(x >= 20 && x < 30) {
        printf("Vinte");
        if(x != 20) printf(" e ");
        x = x - 20;
        numbersInFull10(x);
    }
    if(x >= 30 && x < 40) {
        printf("Trinta");
        if(x != 30) printf(" e ");
        x = x - 30;
        numbersInFull10(x);
    }
    if(x >= 40 && x < 50) {
        printf("Quarenta");
        if(x != 40) printf(" e ");
        x = x - 40;
        numbersInFull10(x);
    }
    if(x >= 50 && x < 60) {
        printf("Cinquenta");
        if(x != 50) printf(" e ");
        x = x - 50;
        numbersInFull10(x);
    }
    if(x >= 60 && x < 70) {
        printf("Sessenta");
        if(x != 60) printf(" e ");
        x = x - 60;
        numbersInFull10(x);
    }
    if(x >= 70 && x < 80) {
        printf("Setenta");
        if(x != 70) printf(" e ");
        x = x - 70;
        numbersInFull10(x);
    }
    if(x >= 80 && x < 90) {
        printf("Oitenta");
        if(x != 80) printf(" e ");
        x = x - 80;
        numbersInFull10(x);
    }
    if(x >= 90 && x < 100) {
        printf("Noventa");
        if(x != 90) printf(" e ");
        x = x - 90;
        numbersInFull10(x);
    }
    if(x == 100) printf("Cem\n\n");
}

/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////

//Imprime uma linha personalizada;
void printLine(int x, char fill, char edge) {
    printf("%c ", edge);
    for(int i = 0; i < x - 2; i++) {
        printf("%c ", fill);
    }
    printf("%c\n\n", edge);
}

//Imprime uma caixa customizada;
void printCustomBox(int height, int width, char fill, char edge) {
    for(int i = 0; i < height; i++) {
        if(i == 0 || i == height - 1) {
            for(int j = 0; j < width; j++) {
                if(j == 0 || j == width - 1) printf("%c", edge);
                else printf(" - ");
            }
        }
        else {
            for(int k = 0; k < width; k++) {
                if(k == 0 || k == width - 1) printf("|");
                else printf(" %c ", fill);
            }
        }
        printf("\n");
    }
    printf("\n\n");
}

//Imprime uma caixa preenchida com um laço
void printBoxFilled(int height, int width, char fill) {
    int cont = 1;
    for(int i = 0; i < (height * width) + height; i++) {
        if(cont == width + 1) {
            printf("\n");
            cont = 0;
        }
        else printf("%c ", fill);
        cont++;
    }
    printf("\n\n");
}

//Imprime uma caixa malhada usando dois laços.
void printBox01(int height, int width) {
    for(int i = 0; i < height; i++) {
        for(int j = 1; j <= width; j++) {
            if(j % 2 == 0) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n\n");
}

//Imprime uma caixa malhada usando um laço.
void printBox02(int height, int width) {
    int cont = 1;
    for(int i = 0; i < (height * width) + height; i++) {
        if(cont == width + 1) {
            printf("\n");
            cont = 0;
        }
        else {
            if(cont % 2 == 0) printf("1 ");
            else printf("0 ");
        }
        cont++;
    }
    printf("\n\n");
}

//Imprime uma caixa progressiva.
void printPregressiveBox(int lim, int height, int width) {
    int cont = 0; 
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < width; j++) {
            if(cont == lim) cont = 0;
            printf("%d ",cont);
            cont++;
        }
        printf("\n");
    }
    printf("\n\n");
}

//Imprime o maior e menor número digitado.
void batchReport(int num, int* max, int* min) {
    if(num > *min) *min = num;
    if(num < *max) *max = num;
}

//Sorteio de numeros e soma de pares e impares
void randReport(int max, int *evenSum, int *primes) {
    int primo = 0;
    int soma = 0;
    int num;
    for(int i = 0; i < max; i++) {
        num = (rand() % max);
        printf("%d ",num);
        if(isPrime(num) == 0) primo++;
        if(num % 2 == 0) soma = soma + num;
    }
    *primes = primo;
    *evenSum = soma;
    printf("\n\n");
}