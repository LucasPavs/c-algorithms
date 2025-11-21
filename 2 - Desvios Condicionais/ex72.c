#include <stdio.h>
const int poupanca = 4;

int main(){
    float valor_entrada, salario, juntar;
    int anos, meses;
    anos = 0;

    printf("Informe o valor da entrada: ");
    scanf("%f", &valor_entrada);

    printf("Informe o valor do seu salario: ");
    scanf("%f", &salario);

    juntar = salario / poupanca;
    meses = valor_entrada / juntar;

    if(meses > 12){
        anos += meses / 12;
        meses = meses % 12;

        printf("\nVoce devera juntar R$ %.2f, por %d anos e %d meses para acumular R$ %.2f de entrada.\n\n", juntar, anos, meses, valor_entrada);
    } 
    else{
        printf("\nVoce devera juntar R$ %.2f, por %d meses para acumular R$ %.2f de entrada.\n\n", juntar, meses, valor_entrada);
    }

    return 0;

}