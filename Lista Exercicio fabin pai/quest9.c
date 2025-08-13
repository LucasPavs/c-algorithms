#include <stdio.h>

int main (){
    int numero, soma = 0, cont = 0;
    float media;

    while (soma < 50)
    {
        printf("\nInforme o valor: ");
        scanf("%d", &numero);

        soma += numero;
        cont++;
    }

    media = (float)soma / cont;

    printf("\nA soma total dos numeros eh: %d \n", soma);
    printf("A quantidade de numeros eh: %d \n", cont);
    printf("A media dos numeros eh: %.3f \n\n", media);

    return 0;
}