#include <stdlib.h>
#include <stdio.h>
/*Programa em C para calcular a multiplicação entre dois números;*/
int num1, num2, resultado;
int main(void){
    
    printf("Digite o primeiro número:");
    scanf("%d", &num1);
    printf("Digite o segundo número:");
    scanf("%d", &num2);
    
    resultado = num1 * num2;
    printf("Produto: %d", resultado);
    
    return 0;
}
