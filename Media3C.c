#include <stdio.h>

int nota1, nota2, nota3, media;
int main(){
    
    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);
    media = (nota1+nota2+nota3)/3;
    if (media>=7){
        printf("Média: %d",media,"\nAprovado");
    }else{
        printf("Média: %d",media,"\nReprovado");
    }
    
    return 0;
}
