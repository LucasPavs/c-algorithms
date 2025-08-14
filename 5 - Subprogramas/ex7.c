#include <stdio.h>

const int quant = 5;

int testaFibonacci(int n)
{
    int penultimo = 0, ultimo = 1, proximo = 0;

    if (n == 0 || n == 1) {
        return 1;
    }

    while (proximo < n) {
        proximo = penultimo + ultimo;
        penultimo = ultimo;
        ultimo = proximo;
        if (proximo == n)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int num, i;

    for (i = 1; i <= quant; i++)
    {
        printf("Teste se seu numero pertence a sequência de Fibonacci: ");
        scanf("%d", &num);
        if (testaFibonacci(num) == 1)
        {
            printf("Pertence! \n\n");
        }
        else
        {
            printf("Não pertence :( \n\n");
        }
    }
    printf("\n\n");

    return 0;
}