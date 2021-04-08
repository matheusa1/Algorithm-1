#include <stdio.h>

int main() {
    float n1, n2, n3, med;
    printf("Digite tres notas:\n");
    scanf("%f %f %f",&n1,&n2,&n3);
    med = (n1 + n2 + n3)/3;
    printf("Media: %.1f",med);
    if(med >= 9){
        printf("\nConceito A");
    }
    else
        if(med >= 8 && med < 9){
            printf("\nConceito B");
        }
        else
            if(med >= 7 && med < 8){
                printf("\nConceito C");
            }
            else    
                printf("\nConceito D");

    return 0;
}