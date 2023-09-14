#include <stdio.h>
/*Programa em C para calcular o volume de uma esfera*/
  int main(){
      int cavalo, ferraduras;
      
      printf("Digite o número de cavalo: ");
      scanf("%d",&cavalo);
      
      ferraduras = cavalo *4;
      
      printf("Quantidade de ferraduras necessárias: %d\n", ferraduras);

      return 0;

  }
