#include <conio.h>
#include <math.h>
#define PI 3.14
/*Programa em C para calcular o volume de uma esfera*/
float Volume(float raio) {
    float v= 4/3 * (PI*pow(raio,3));
    return v;
}

int main() {
    float Raio,Resultado;

    printf("Digite o raio da esfera :");
    scanf("%f",&Raio);

    Resultado=Volume(Raio);
    printf("%.3f\n", Resultado);

    getchar();
    return 0;
    
}
