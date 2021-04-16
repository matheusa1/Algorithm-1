#include <stdio.h>
#include <ctype.h>

int main(){

    char a;

    printf("\n\nDigite um caractere: ");
    scanf("%c", &a);

    if(isalpha(a)) {
        a = toupper(a);
        printf("\nEh uma letra!!!");
        if(a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
            printf("\nEh vogal!!");
        }
        else
            printf("\nEh consoante!!"); 
    }
    else
    if(isalnum(a)){
        printf("\nEh numero!!");

    }
    else
    printf("\nEh Simbolo!");

    return 0;
}