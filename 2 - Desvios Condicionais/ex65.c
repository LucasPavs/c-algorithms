#include <stdio.h>

int main(){
int idade;

printf("Informe sua idade: ");
scanf("%d", &idade);

if(idade >= 0){
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
}
else{
    printf("\nIdade invalida.\n\n");
}
return 0;

}