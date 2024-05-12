#include <stdio.h>

int num1, num2,num3;
int main(){
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    if (num1>num2 && num1>num3){
        printf("O primeiro número é maior que o segundo e o terceiro número");
    }else if (num2>num1 && num2>num3){
        printf("O segundo número é maior que o primeiro e o terceiro número");
    }else if (num3>num1 && num3>num2){
        printf("o terceiro número é maior que o primeiro e o segundo número");
    }else if (num1==num2 && num2==num3){
        printf("Os números informados são iguais");
    }
    
    return 0;
}
