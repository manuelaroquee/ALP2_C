#include <stdio.h>

int main() {
    int numeros[100];
    int soma = 0;

    printf("Digite 100 números inteiros:\n");

    for (int i = 0; i < 100; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("A soma dos números é: %d\n", soma);

    return 0;
}
