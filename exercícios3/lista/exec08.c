#include <stdio.h>

int main(){
    float a, b, c;
    printf("Digite tres numeros:  ");
    scanf("%f %f %f",&a,&b,&c);
    if(a <= b && b <= c){
        printf("%f %f %f", a, b, c);
    }
    else
        if(a <= c && c <= b){
            printf("%f %f %f", a, c, b);
        }
        else
            if(b <= a && a <= c){
                printf("%f %f %f", b, a, c);
            }
            else
                if(b <= c && c <= a){
                    printf("%f %f %f", b, c, a);
                }
                else
                    if(c <= b && b <= a){
                        printf("%f %f %f", c, b, a);
                    }
                    else
                    printf("%f %f %f", c, a, b);
    
    return 0;
}