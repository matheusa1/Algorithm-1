#include <stdio.h>

int main() {
    float Si, Sf, Td, Tc, Op;
    Sf, Td, Tc = 0;
    int x = 1;

    printf("\n\nDigite o saldo inicial(0 para sair): ");
    scanf("%f", &Si);

    while(Op != 0) {
        printf("Operacao? >");
        scanf("%f", &Op);

        if(Op > 0) {
            Tc = Tc + Op;
        }
        if(Op < 0) {
            Td = Td + Op;
        }
        if(Op == 0){
            x = 0;
        }
    }
    Sf = Si + Tc + Td;
    printf("\nTotal de creditos .....: R$ %.2f \n", Tc);
    printf("Total de debitos ......: R$ %2.f \n", -(Td));
    printf("CPMF paga .............: R$ %.2f \n", -(Td) * 0.0035);
    printf("Saldo final ...........: R$ %.2f \n\n",Sf);


    return 0;
}