#include <stdio.h>

int main(){

    int i;
        FILE * fptr;
        char fn[50];
        char str[] = "Guru99 Rocks\nASDllss\nASDADA\n \b";
        fptr = fopen("teste.txt", "w"); // "w" defines "writing mode"
        for (i = 0; str[i] != '\b'; i++) {
            /* write to file using fputc() function */
            fputc(str[i], fptr);
        }
        fclose(fptr);
        return 0;
}