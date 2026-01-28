#include <stdio.h>

int main(){
float atual,anterior,var;

printf("Digite o preço atual: ");
scanf("%f",&atual);

printf("Digite o valor anterior: ");
scanf("%f", &anterior);

var = (atual - anterior)/anterior * 100;

printf("A variacao percentual de um preço pra outro eh de: %.1f%\n\n",var);

return 0;
}