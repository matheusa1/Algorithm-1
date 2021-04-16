#include <stdio.h>

int main(){

    int i = 33;

    printf("DEC   OCT   HEX   CHR");

    while(i <= 126){
        printf("%3d   %3o   %3X   %3c\n",i, i, i, i);
        i++;
    }

    return 0;

}