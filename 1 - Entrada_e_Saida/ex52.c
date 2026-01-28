#include <stdio.h>
const float taxa = 5; const float mensalidade = 80;

int main(){
 int dados_usados;

 printf("Informe a quantidade de dados usados: ");
 scanf("%d", &dados_usados);

 if (dados_usados <= 100){
    printf("Voce pagara %f reais de mensalidade.\n\n", mensalidade);
 }
 else {
    float valor_adc = (dados_usados - 100) * taxa;
    float valor_final = mensalidade + valor_adc;

    printf("Voce pagara R$ %.1f de mensalidade, com um adicional de R$ %1.f pelos dados adicionais ultilizados, totalizando R$ %.1f.\n\n", mensalidade, valor_adc, valor_final);
 }
 return 0;




}