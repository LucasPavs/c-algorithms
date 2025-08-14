#include <stdio.h>

const float inss = 0.89;
const float ir1 = 0.925;
const float ir2 = 0.85;
const float ir3 = 0.775;
const float ir4 = 0.725;


int main(){
    float salario_bruto, salario_inss;

    printf("Informe o valor do seu salario: ");
    scanf("%f", &salario_bruto);

    salario_inss = salario_bruto * inss;

    if(salario_inss < 1904.99){
        printf("\nSeu salario liquido eh: %.2f\n\n", salario_inss);
    }
    else if (salario_inss < 2826.66){
        printf("\nSeu salario liquido eh: %.2f\n\n", salario_inss * ir1);
    }
    else if (salario_inss < 3751.06){
        printf("\nSeu salario liquido eh: %.2f\n\n", salario_inss * ir2);
    }
    else if (salario_inss < 4664.69){
        printf("\nSeu salario liquido eh: %.2f\n\n", salario_inss * ir3);
    }
    else{
        printf("\nSeu salario liquido eh: %.2f\n\n", salario_inss * ir4);
    }

    return 0;
}