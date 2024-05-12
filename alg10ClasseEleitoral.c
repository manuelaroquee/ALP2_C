#include <stdio.h>

int idade;
int main(){
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade<16){
        printf("Não-Eleitor");
    }else if (18<idade && idade<=65){
        printf("Eleitor Obrigatório");
    }else if (idade>=16 && idade<=18 && idade>65 {
        printf("Eleitor Facultativo");
    }
    
    return 0;
}
