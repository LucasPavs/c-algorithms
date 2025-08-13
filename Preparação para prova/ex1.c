#include <stdio.h>

int main(){
    int idade;
    char nome[30];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade <= 0){
        printf("Idade invalida.\n\n");
        return 0;
    }

    if(idade < 18){
        printf("Entrada proibida.\n\n");
    }
    else if(idade < 60){
        printf("Entrada permitida.\n\n");
    }
    else{
        printf("Entrada com prioridade.\n\n");
    }

    return 0;
}