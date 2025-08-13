// Escreva um programa que leia a idade de uma pessoa e verifique se ela é criança (0- 12 anos), adolescente (13-17 anos), adulta (18-59) ou idosa (acima de 60 anos).

#include <stdio.h>

int main(){
int idade;

printf("Informe sua idade: ");
scanf("%d", &idade);

if(idade < 13){
    printf("Crianca.\n\n");
}
else if(idade < 18){
    printf("Adolescente.\n\n");
}
else if(idade < 60){
    printf("Adulto.\n\n");
}
else {
    printf("Idoso.\n\n");
}
return 0;

}