#include <stdio.h>

int main() {
    float salario, salarioReajust;
    
    printf("Informe o salário: R$ ");
    scanf("%f", &salario);

    if (salario <= 350.0) {
        // Reajuste de 50% para salários até R$ 350,00
        salarioReajust = salario * 1.5;
    } else {
        // Reajuste de 30% para salários acima de R$ 350,00
        salarioReajust = salario * 1.3;
    }

    printf("O salário após o resjuste é: R$ %.2f\n", salarioReajust);

    return 0;
}
