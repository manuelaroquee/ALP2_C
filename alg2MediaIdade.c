#include <stdio.h>

int main(){

int idade, soma=0, cont=0;
float media;

printf("Digite sua idade: ");
scanf("%d",&idade);

while (idade > 0){
soma += idade;
cont++;
scanf("%d",&idade);
}
media = (float)soma / (float)cont;

printf("IDADE MEDIA = %.2f\n",media);

return 0;
}
