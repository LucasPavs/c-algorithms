#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[50];
    char sexo;
    int idade;
    int totalPessoas = 20;
    int mulheres18e21 = 0;
    
    printf("Formulario de Pesquisa:\n");

    for (int i = 1; i <= totalPessoas; i++) {
        printf("\nPessoa %d:\n", i);

        printf("Digite o nome: ");
        scanf(" %[^\n]", nome); // lê nome com espaços

        // Validação do sexo
        do {
            printf("Digite o sexo (M/F): ");
            scanf(" %c", &sexo);
            sexo = toupper(sexo); // converte para maiúsculo
            if (sexo != 'M' && sexo != 'F') {
                printf("Sexo invalido! Digite 'M' para masculino ou 'F' para feminino.\n");
            }
        } while (sexo != 'M' && sexo != 'F');

        // Validação da idade
        do {
            printf("Digite a idade: ");
            scanf("%d", &idade);
            if (idade < 0 || idade > 120) {
                printf("Idade invalida! Digite uma idade entre 0 e 120.\n");
            }
        } while (idade < 0 || idade > 120);

        // Contagem de mulheres entre 18 e 21 anos
        if (sexo == 'F' && idade >= 18 && idade <= 21) {
            mulheres18e21++;
        }
    }

    float percentual = (mulheres18e21 * 100.0) / totalPessoas;
    printf("\nPercentual de mulheres entre 18 e 21 anos: %.2f%%\n", percentual);

    return 0;
}
