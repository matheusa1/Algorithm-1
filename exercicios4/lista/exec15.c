#include <stdio.h>

int main(){
    int x, i;
    int v1, v2, v3, v4, vn, vb;

    printf("\n\n+---------------------------+ \n|   Sair = 0                | \n|   Candidato 1 = 1         | \n|   Candidato 2 = 2         | \n|   Candidato 3 = 3         | \n|   Candidato 4 = 4         | \n|   Nulo = 5                | \n|   Branco = 6              |\n+---------------------------+");
    printf("\n\nDigite os votos em sequencia: \n");

    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    vn = 0;
    vb = 0;
    x = 1;

    while(x != 0){
        scanf("%d",&x);
        if(x < 0 || x > 6){
            printf("\nVoto invalido!\n");
        }
        else
            if(x == 0){
                break;
            }
            else    
                if(x == 1){
                    v1++;
                }
                else
                    if(x == 2){
                        v2++;
                    }
                    else
                        if(x == 3){
                            v3++;
                        }
                        else
                            if(x == 4){
                                v4++;
                            }
                            else
                                if(x == 5){
                                    vn++;
                                }
                                else
                                    if(x == 6){
                                        vb = vb + 1;
                                    }                               
    }    
    
    if(v1 > v2 && v1 > v3 && v1 > v4){
        v1 = v1 + vb;
    }
    else
        if(v2 > v1 && v2 > v3 && v2 > v4){
            v2 = v2 + vb;
        }
        else
            if(v3 > v1 && v3 > v2 && v3 > v4){
                v3 = v3 + vb;
            }
            else
                if(v4 > v1 && v4 > v2 && v4 > v3){
                    v4 = v4 + vb;
                }
    
    printf("\nVotos: \nCanditato 1: %d \nCandidato 2: %d \nCandidato 3: %d \nCandidato 4: %d \nVotos nulos: %d \nVotos em branco: %d", v1, v2, v3, v4, vn, vb);
    printf("\n\n");

    return 0;
}