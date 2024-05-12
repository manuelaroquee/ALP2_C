#include <stdio.h>
#define TRUE  1                   
#define FALSE 0                   

int main(){
    int n, d=2, primo=TRUE, resto;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n <= 1)
	primo = FALSE;

    while (primo == TRUE && d <= n / 2) {
	resto = n % d;
	if (resto == 0)
	    primo = 0;
	d = d + 1;
	
    } if (primo == TRUE)
	printf("%d é primo \n", n);
    else
	printf(" %d nao é primo \n", n);

    return 0;
}
