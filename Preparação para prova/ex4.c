#include <stdio.h>

int main(){
    int parc, parc1;

    printf("Informe as duas notas: ");
    scanf("%d%d", &parc, &parc1);

    if( parc == 10  || parc1 == 10){
        printf("Tirou nota maxima em uma das provas.\n\n");
    }
    else if( parc1 > parc){
        printf("Melhorou da primeira pra segunda.\n\n");
    }
    else if( parc == parc1){
        printf("Manteve a mesma nota.\n\n");
    }
    else{
        printf("Foi pior na segunda.\n\n");
    }

    return 0;
}