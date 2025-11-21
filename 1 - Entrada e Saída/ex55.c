#include <stdio.h>
const int dias = 180;

int main(){
  int pedreiro, ajudante;
  float valor;

  printf("Informe o numero de pedreiros: ");
  scanf("%d", &pedreiro);

  printf("Informe o numero de ajudantes: ");
  scanf("%d", &ajudante);

  printf("Informe o valor da diaria: ");
  scanf("%f", &valor);
  
  float gasto_total = ((valor * pedreiro) + ((valor/2) * ajudante)) * dias;

  printf("\n O valor total gasto eh de: R$ %.2f\n\n", gasto_total);

  return 0;
}