#include <stdio.h>

int main(){
    char estado_civil;

    printf("Informe seu estado civi: S (solteiro), C (casado), D (divorciado) e V (viúvo): ");
    scanf("%c", &estado_civil);

    switch(estado_civil){
        case 'S':
            printf("\nSolteiro.\n\n");
            break;
        case 'C':
            printf("\nCasado.\n\n");
            break;
        case 'D':
            printf("\nDivorciado.\n\n");
            break;

        case 'V':
            printf("\nViuco.\n\n");
            break;
        default:
            printf("\nCaracter invalido.\n\n");
            break;
    }

    return 0;
}