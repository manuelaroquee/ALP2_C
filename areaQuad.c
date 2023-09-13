#include <stdio.h>

int main(){
    int lado, area;
    
    printf("Digite o lado do quadrado: ");
    scanf("%d", &lado);
    
    area = lado*lado;
    printf("Área: %.2d\n", area);
    
    return 0;
}
