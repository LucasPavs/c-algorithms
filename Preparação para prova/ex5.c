#include <stdio.h>

int main(){
    int hora, min;

    printf("Informe a hora que o aluno chegou: ");
    scanf("%d", &hora);

    printf("Informe o minuto que o aluno chegou: ");
    scanf("%d", &min);

    if( hora < 7 || hora == 7 && min == 0 ){
        printf("Chegou pontualmente.\n\n");
    }
    else if( hora == 7 && min < 16){
        printf("Chegou atrasado.\n\n");
    }
    else if( hora == 7 && min > 15 || hora > 7){
        printf("Chegou muito atrasado.\n\n");
    }

    return 0;
}