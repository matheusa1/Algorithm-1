#include <stdio.h>
#include <string.h>

void clearBuffer();
void exerciseSelection(int x);
void printString();
void printStringReverse(char str[]);
void printStringHyphenized(char str[], char separator);
void stringReport(char str[]);
void stringToUpper(char str[]);
int stringCompareNoCase(char str1[], char str2[]);
int countWords(char str[]);
int countWordsPlus(char str[]);
void stringCaptalize(char str[]);
int stringCompare(char str1[], char str2[]);
void stringTrim(char str[]);
int stringContain(char str[], char strSub[]);
void removeSubString(char str[], char strSub[]);
void cutString(char str[], char strSub[]);
char numberToString(int x);
void intToString(int number, char converter[]);
int stringToInt(char txtnum[]);
void lettersFrequency(char str[]);

int main() {
    int boole, a;
    boole = 1;
    while(boole != 0) {
        printf("\nQual exercicio deseja?(0 para sair): ");
        scanf("%d", &a);
        if(a == 0) boole = 0;
        else exerciseSelection(a);
    }
    return 0;
}
void clearBuffer() {
    while(getchar() != '\n');
}

void exerciseSelection(int x) {
    if(x == 1) printString();
    if(x == 2) {
        char str[] = "Big_Day";
        printStringReverse(str);
    }
    if(x == 3) {
        char str[] = "Hypnotized";
        printStringHyphenized(str, '-');
    }
    if(x == 4) {
        char str[] = "123.;,/*XXIIXasa2.;";
        stringReport(str);
    }
    if(x == 5) {
        char str[] = "All your BASE are Belong to US!";
        stringToUpper(str);
        printf("\n%s\n", str);
    }
    if(x == 6) {
        char s1[] = "Joelmi";
        char s2[] = "JOELMI";
        int res = stringCompareNoCase(s1, s2);
        if(res > 0 || res < 0) printf("\nStrings Diferentes"); 
        if(res == 0) printf("\nStrings iguais.");
    }
    if(x == 7) {
        char str[] = "Why do you steal my kite and my line?";
        printf("\n%d\n", countWords(str));
    }
    if(x == 8) {
        char str[] = "Why do     you steal   my kite and my line?";
        printf("\n%d\n", countWordsPlus(str));
    }
    if(x == 9) {
        char str[] = "I like SOme chEESE bread!!";
        stringCaptalize(str);
    }
    if(x == 10) {
        char s1[] = "Joelmi come caca de nariz";
        char s2[] = "JOELMI COME CACA DE NARIZ";
        int res = stringCompare(s1, s2);
        if(res > 0) printf("\nString1 vem antes");
        if(res < 0) printf("\nString2 vem antes");
        if(res == 0) printf("\nStrings iguais.");
    }
    if(x == 11) {
        char str[] = "      Hello World     ";
        stringTrim(str);
    }
    if(x == 12) {
        char str[] = "I can help myself";
        int check = stringContain(str, "help");
        if(check == 1) printf("\nContem\n");
        else printf("\nNao contem\n");
    }
    if(x == 13) {
        char str[] = "The important thing is what metters, what does metter isn't important.";
        cutString(str, "metters");
    }
    if(x == 14) {
        char str[] = "so, is that!!!";
        removeSubString(str, "is");
    }
    if(x == 15) {
        char str[11];
        intToString(512, str); 
    }
    if(x == 16) {
        printf("\n%d\n",stringToInt("102453"));
    }
    if(x == 17) {
        char str[] = "Water MeLlon";
        lettersFrequency(str);
    }
}

void printString() {
    char str[15];
    printf("\nDigite uma palavra de até 14 caracteres: ");
    scanf(" %14[^\n]", str);
    clearBuffer();
    printf("\n%s\n", str);
}

void printStringReverse(char str[]) {
    int len = strlen(str);
    for(int i = len - 1; i >= 0; i--) {
        printf("%c ", str[i]);
    }
}

void printStringHyphenized(char str[], char separator) {
    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c%c", str[i], separator);
    }
    printf("\b ");
}

void stringReport(char str[]) {
    int count[3] = {0};
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 33 && str[i] <= 47) count[0]++;
        if(str[i] >= 58 && str[i] <= 64) count[0]++;
        if(str[i] >= 91 && str[i] <= 96) count[0]++;
        if(str[i] >= 123 && str[i] <= 126) count[0]++;
        if(str[i] >= 48 && str[i] <= 57) count[1]++;
        if(str[i] >= 65 && str[i] <= 90) count[2]++;
        if(str[i] >= 97 && str[i] <= 122) count[2]++;
    }
    printf("\nLetras: %d\nNumeros: %d\nCaracteres especiais: %d\n", count[2], count[1], count[0]);
}

void stringToUpper(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 97 && str[i] <= 122) str[i] = str[i] - 32;
    }
}

int stringCompareNoCase(char str1[], char str2[]) {
    stringToUpper(str1);
    stringToUpper(str2);
    return strcmp(str1, str2);
}

int countWords(char str[]) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') count++;
    }
    return count + 1;
}

int countWordsPlus(char str[]) {
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ' && str[i + 1] != ' ') count++;
    }
    return count + 1;
}

void stringCaptalize(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(i == 0) {
            if(str[i] >= 97 && str[i] <= 122) str[i] = str[i] - 32;
        }
        else {
            if(str[i] != ' ' && str[i - 1] == ' ') {
                if(str[i] >= 97 && str[i] <= 122) str[i] = str[i] - 32;
            }
            else {
                if(str[i] >= 65 && str[i] <= 90) str[i] = str[i] + 32;
            }
        }
    }
    printf("\n%s\n", str);
}
int stringCompare(char str1[], char str2[]) {
    stringToUpper(str1);
    stringToUpper(str2);
    int boole = 0;
    for(int i = 0; str1[i] != '\0'; i++) {
        if(str1[i] != str2[i]) boole = 3;
    }
    if(boole = 0) return 0;
    else{
        for(int i = 0; str1[i] != '\0'; i++) {
            if(str1[i] > str2[i]) return 1;
            if(str1[i] < str2[i]) return -1;
        }
    }
}
void stringTrim(char str[]) {
    char strAux[strlen(str)];
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++) {
       if(str[i] != ' ') {
           strAux[count] = str[i];
           count++;
       }
       if(str[i] == ' ' && str[i + 1] != ' ' && str[i - 1] != ' ') {
           strAux[count] = str[i];
           count++;
       }
    }
    strcpy(str, strAux);
    printf("\n%s\n", str);
}

int stringContain(char str[], char strSub[]) {
    int x = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == strSub[x]) x++;
        else x = 0;
        if(strSub[x] == '\0') return 1;
    }
    return 0;
}

void cutString(char str[], char strSub[]) {
    printf("\n%s\n", str);
    int cont = 0;
    char strAux[strlen(str)];
    for(int i = 0; str[i] != '\0'; i++) {
        strAux[i] = str[i];
        if(str[i] == strSub[cont]) cont++;
        else cont = 0;
        if(strSub[cont] == '\0') break;
    }
    strcpy(str, strAux);
    printf("\n%s\n", str);
}

void removeSubString(char str[], char strSub[]) {
    char strAux[strlen(str)];
    int cont1 = 0;
    int cont2 = 0;
    printf("\n%s\n", str);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != strSub[cont1]) {
            strAux[cont2] = str[i];
            cont2++;
        }
        else {
            if(str[i] == strSub[cont1]) cont1++;
            else cont1 = 0;
        }
    }
    strcpy(str, strAux);
    printf("\n%s\n", str);
}
char numberToString(int x) {
    if(x == 1) return '1';
    if(x == 2) return '2';
    if(x == 3) return '3';
    if(x == 4) return '4';
    if(x == 5) return '5';
    if(x == 6) return '6';
    if(x == 7) return '7';
    if(x == 8) return '8';
    if(x == 9) return '9';
    if(x == 0) return '0';
}
void intToString(int number, char converter[]) {
    int res = 1;
    int cont = 0;
    while(number > 0) {
        res = number % 10;
        number = number / 10;
        converter[cont] = numberToString(res);
        cont++;
    }
    for(int i = cont - 1; i >= 0; i--){
        printf("%c", converter[i]);
    }
}
int stringToInt(char txtnum[]) {
    int multip = 1;
    int res = 0;
    int vet[20];
    for(int i = strlen(txtnum) - 1; i >= 0; i--) {
        vet[i] = (int)(txtnum[i] - 48) * multip;   
        multip = multip * 10;
    }
    for(int i = 0; i < strlen(txtnum); i++) res = res + vet[i];
    return res;
}

void lettersFrequency(char str[]){
    int count[70] = {0};
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 65 && str[i] <= 90) str[i] = str[i] + 32;
    }
    
} 