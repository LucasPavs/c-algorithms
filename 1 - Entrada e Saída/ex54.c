#include <stdio.h>

int main(){
  int hora, minuto;
  int passou_de_hoje = 0;

  printf("Informe a hora que voce saiu: ");
  scanf("%d", &hora);

  printf("Informe o minuto que voce saiu: ");
  scanf("%d", &minuto);

minuto += 50;
  if( minuto > 60){
    hora += minuto / 60;
    minuto = minuto % 60;
  }

  if( hora > 24 ){
     passou_de_hoje = 1;
     hora = hora % 4;
  }

printf("\nChegada em Sousa: %02d:%02d\n\n", hora, minuto);

minuto += 20;
  if (minuto >= 60) {
    hora += minuto / 60;
    minuto = minuto % 60;
  }
  if (hora >= 24) {
    passou_de_hoje = 1;
    hora = hora % 24;
  }

minuto += 120;
  if (minuto >= 60) {
    hora += minuto / 60;
    minuto = minuto % 60;
    }
  if (hora >= 24) {
    passou_de_hoje = 1;
    hora = hora % 24;
    }
printf("Chegada em Patos: %02d:%02d\n\n", hora, minuto);

minuto += 20;
  if (minuto >= 60) {
    hora += minuto / 60;
    minuto = minuto % 60;
    }
  if (hora >= 24) {
    passou_de_hoje = 1;
    hora = hora % 24;
    }
    
minuto += 150;
  if (minuto >= 60) {
    hora += minuto / 60;
    minuto = minuto % 60;
    }
  if (hora >= 24) {
    passou_de_hoje = 1;
    hora = hora % 24;
    }
printf("Chegada em Campina Grande: %02d:%02d\n\n", hora, minuto);

minuto += 20;
  if (minuto >= 60) {
    hora += minuto / 60;
    minuto = minuto % 60;
    }
  if (hora >= 24) {
    passou_de_hoje = 1;
    hora = hora % 24;
    }

   
minuto += 120;
  if (minuto >= 60) {
    hora += minuto / 60;
    minuto = minuto % 60;
    }
  if (hora >= 24) {
    passou_de_hoje = 1;
    hora = hora % 24;
    }

  if (passou_de_hoje) {
    printf("Chegada em João Pessoa: %02d:%02d (no dia seguinte)\n\n", hora, minuto);
    } 
  else {
    printf("Chegada em João Pessoa: %02d:%02d\n\n", hora, minuto);
    }

return 0;
}