#include <stdio.h>
int main() {
    int inicial, final;

    printf("Informe o valor inicial do intervalo: ");
    scanf("%d", &inicial);

    printf("Informe o valor final do intervalo: ");
    scanf("%d", &final);

    printf("Números pares no intervalo de %d a %d:\n", inicial, final);

    if (inicial % 2 != 0) {
        inicial++;    }

  
    for (int i = inicial; i <= final; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
