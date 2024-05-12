#include <stdio.h>

int main() {
    int n, j, i, soma, aux;
    
    scanf("%d", &n);
    
    aux =1;
    
    for(i = 1; i <= aux; i++) {
        soma = 0;
        printf("%d = ", n);

        for(j = 1; j < n; j++){
            if (n % j == 0){
                soma += j;
                printf("%d + ", j);
            }
        }  if (n == soma){
            printf("= %d (O NÚMERO É PERFEITO)\n", soma);
        } else{
            printf("= %d (O NUMERO NAO É PERFEITO)\n", soma);
        }
