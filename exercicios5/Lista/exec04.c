#include <stdio.h>

int main() {
    int sum, a, b, c;
    sum, c = 0;
    a, b = 1;

    while (c <= 4000000){
        c = a + b;
        a = b;
        b = c;

        if(c % 2 == 0) {
            sum += c;
        }
    }
    printf("%d",sum);

    return 0;
}