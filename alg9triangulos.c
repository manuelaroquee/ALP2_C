#include <stdio.h>

int main() {
    float l1, l2, l3;

    printf("Informe os três lados do triângulo:\n");
    scanf("%f %f %f", &l1, &l2, &l3);

    if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1) {
        // Os lados formam um triângulo

        if (l1 == l2 && l2 == l3) {
            printf("O triângulo é equilátero.\n");
        } else if (l1 == l2 || l1 == l3 || l2 == l3) {
            printf("O triângulo é isósceles.\n");
        } else {
            printf("O triângulo é escaleno.\n");
        }
    } else {
        printf("Os lados informados não formam um triângulo.\n");
    }

    return 0;
}
