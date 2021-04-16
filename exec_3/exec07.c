#include <stdio.h>

int main(){
    float a, b, c;
    printf("Digite tres numeros:  ");
    scanf("%f %f %f",&a,&b,&c);
    if(a>b>c || a>c>b){
        printf(" %f ",a);
    }
    else
        if(b>a>c || b>c>a){
            printf(" %f ",b);
        }
        else
            printf(" %f ",c);

    return 0;
}