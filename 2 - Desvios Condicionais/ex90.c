#include <stdio.h>

int main() {
    int mes;
    char *meses[] = {"","Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};

    printf("Informe o mês (1-12): ");
    scanf("%d", &mes);

    switch(mes) {
        case 1:
        case 2:
        case 3:
            printf("\n1º trimestre \nMês: %s\n\n", meses[mes]);
            break;
        case 4:
        case 5:
        case 6:
            printf("\n2º trimestre \nMês: %s\n\n", meses[mes]);
            break;
        case 7:
        case 8:
        case 9:
            printf("\n3º trimestre \nMês: %s\n\n", meses[mes]);
            break;
        case 10:
        case 11:
        case 12:
            printf("\n4º trimestre \nMês: %s\n\n", meses[mes]);
            break;
        default:
            printf("\nMês inválido.\n\n");
    }

    return 0;
}
