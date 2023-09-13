#include <stdio.h>
/*Programa em C para calcular o peso de um indivíduo no planeta terra, sabendo que a gravidade na terra é 9,8 m/s2;*/
int main(){
    float massa, gravidade=9.8, fgravidade;
    
    printf("Qual seu peso? ");
    scanf("%f", &massa);
    
    fgravidade = massa*gravidade;
    printf("força da gravidade no indivíduo: %.2f\n", fgravidade);
    
    return 0;
}
