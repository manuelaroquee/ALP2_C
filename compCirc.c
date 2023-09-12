#include <stdio.h>
#define pi 3.14159

int main(){
    float raio, comp;
    
    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);
    
    comp = 2*pi*raio;
    printf("Comprimento da circunferência: %.2f\n", comp);
    
    return 0;
}
