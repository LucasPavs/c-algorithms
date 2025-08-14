#include <stdio.h>

int main(){
 int gols_casa, gols_fora;

 printf("Informe os gols do time da casa: ");
 scanf("%d", &gols_casa);

 printf("Informe os gols do time de fora: ");
 scanf("%d", &gols_fora);

 if( gols_casa > gols_fora){
    printf("O time da casa ganhou pelo placar de %d X %d.\n\n", gols_casa, gols_fora);
 }
 else if(gols_casa < gols_fora) {
    printf("\nO time de fora ganhou pelo placar de %d X %d.\n\n", gols_fora, gols_casa);
 }
 else{
    printf("\nO jogo saiu empate, placar foi %d X %d\n\n", gols_casa, gols_fora);
 }

 return 0;
}