#include <stdlib.h>
#include <stdio.h>
/*Programa em C para realizar a soma entre dois números;*/
int num1, num2, soma;
int main(void){
    
    printf("Digite o primeiro número:");
    scanf("%d", &num1);
    printf("Digite o segundo número:");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    printf("Soma: %d", soma);
    
    return 0;
}
