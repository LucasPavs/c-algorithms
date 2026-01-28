#include <stdio.h>

const float taxa = 1.17; const float preco = 0.35; const float prefeitura = 15;

int main(){
float valor_um, valor_dois, var, consumo_final;

printf("Informe os dois ultimos valores do medidor de energia (KWh), anterior e atual, respectivamente: ");
scanf("%f%f", &valor_um, &valor_dois);

var = valor_dois - valor_um;

consumo_final = ( var * preco * taxa) + prefeitura;

printf("O valor a ser pago eh: R$ %.2f \n\n", consumo_final);

return 0;
}