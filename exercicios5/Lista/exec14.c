#include <stdio.h>

int main() {

    float n, vt, vf;
    int i = 1;
    
    printf("Digite os precos das mercadorias:(0 para sair)\n");

    vt = 0;
    while (i != 0) {
        scanf("%f", &n);
        if(n == 0) i = 0;
        else{
            vt = vt + n;
        }
    }
    
    if(vt < 50) {
        vf = vt - (vt * 0.05);
    }
    else {
        if(vt >= 50 && vt <= 100) {
            vf = vt - (vt * 0.1);
        }
        else {
            if(vt > 100 && vt <=200) {
                vf = vt - (vt * 0.15);
            }
            else {
                vf = vt - (vt * 0.2);
            }
        }
    }
    printf("Valor a ser pago: %.2f", vf);

    return 0;
}