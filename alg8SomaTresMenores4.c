#include <stdio.h>

int main() {
    float n1, n2, n3, n4;
    float soma;

    printf("Digite quatro números distintos:\n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    // Encontre os três menores números
    float menor1, menor2, menor3;
    menor1 = menor2 = menor3 = n1;

    if (n2 < menor1) {
        menor3 = menor2;
        menor2 = menor1;
        menor1 = n2;
    } else if (n2 < menor2) {
        menor3 = menor2;
        menor2 = n2;
    } else if (n2 < menor3) {
        menor3 = n2;
    }

    if (n3 < menor1) {
        menor3 = menor2;
        menor2 = menor1;
        menor1 = n3;
    } else if (n3 < menor2) {
        menor3 = menor2;
        menor2 = n3;
    } else if (n3 < menor3) {
        menor3 = n3;
    }

    if (n4 < menor1) {
        menor3 = menor2;
        menor2 = menor1;
        menor1 = n4;
    } else if (n4 < menor2) {
        menor3 = menor2;
        menor2 = n4;
    } else if (n4 < menor3) {
        menor3 = n4;
    }

    soma = menor1 + menor2 + menor3;

    printf("A soma dos três menores números é: %.2f\n", soma);

    return 0;
}
