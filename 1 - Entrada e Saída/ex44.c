#include <stdio.h>

int main(){
int n1,n2,n3,n4, valor_real;

printf("Digite o primeiro numero binario: ");
scanf("%d", &n1);

printf("Digite o segundo numero binario: ");
scanf("%d", &n2);

printf("Digite o terceiro numero binario: ");
scanf("%d", &n3);

printf("Digite o quarto numero binario: ");
scanf("%d", &n4);

valor_real = n1*8 + n2*4 + n3*2 + n4*1;

printf("\nO valor em decimal do numero binario eh: %d\n\n", valor_real);

}