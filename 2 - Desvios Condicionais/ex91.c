#include <stdio.h>

int main() {
    int mes, ano, dias;
    char *meses[] = {"", "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho",
                     "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    printf("Informe o mês (1-12): ");
    scanf("%d", &mes);

    printf("Informe o ano: ");
    scanf("%d", &ano);

    switch (mes) {
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12:
            dias = 31;
            break;

        case 4: 
        case 6: 
        case 9: 
        case 11:
            dias = 30;
            break;

        case 2:
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
                dias = 29;
            }    
            else{
                dias = 28;
            }    
            break;
            
        default:
            printf("\nMês inválido.\n\n");
            return 1;
    }

    printf("\n%s do ano %d tem %d dias.\n\n", meses[mes], ano, dias);

    return 0;
}
