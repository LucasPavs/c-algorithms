#include <stdio.h>
#include <math.h>

int main(){
float peso,altura,imc;

printf("Digite seu peso (KG): ");
scanf("%f", &peso);

printf("Digite sua altura (m): ");
scanf("%f", &altura);

imc= peso / pow(altura,2);

if (imc < 18.6 ){
  printf("Seu imc eh: %.1f \n Voce esta varapau",imc);
}
else if ( imc > 24.9){
    printf("Seu imc eh: %.1f \n Voce esta obeso",imc);
}
else{
    printf("Seu imc eh: %.1f \n Voce esta no peso ideal",imc);
}

return 0;


}