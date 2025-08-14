#include <stdio.h>

const int pt = 13;
const int ptb = 14;
const int pmdb = 15;
const int dem = 25;
const int psdb = 45;
const int pcdob = 65;

int main(){
   int numero_candidato, valor_partido;

   printf("Informe o numero do candidato(XXXXX): ");
   scanf("%d", &numero_candidato);

   valor_partido = numero_candidato / 1000;

   if(valor_partido == pt){
    printf("\n\nDeputado eh afiliado ao partido do PT.\n\n");
   }
   else if(valor_partido == ptb){
    printf("\n\nDeputado eh afiliado ao partido do PTB.\n\n");
   }
   else if(valor_partido == pmdb){
    printf("\n\nDeputado eh afiliado ao partido do PMDB.\n\n");
   }
   else if(valor_partido == dem){
    printf("\n\nDeputado eh afiliado ao partido do DEM.\n\n");
   }
   else if(valor_partido == psdb){
    printf("\n\nDeputado eh afiliado ao partido do PSDB.\n\n");
   }
   else{
    printf("\n\nDeputado eh afiliado ao partido do PCdoB.\n\n");
   }
 return 0;
}


