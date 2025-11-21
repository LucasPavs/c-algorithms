#include <stdio.h>
#include <string.h>

#define TAM 50

typedef struct {
    int idade;
    float peso;
    char nome[TAM];
} TipoPessoa;

int main() {

    //Definindo valores
    TipoPessoa pessoa1 = {0, 0.0, "Joao"};
    
    printf("Idade: %d\n", pessoa1.idade);
    printf("Peso: %.2f\n", pessoa1.peso);
    printf("Nome: %s\n\n", pessoa1.nome);
    
    //Alterando valores
    //pessoa1.idade = 10;
    //pessoa1.peso = 30.5;
    //strcpy(pessoa1.nome, "Lucas");

    //Interação com o teclado
    printf("Informe a nova idade:\n");
    scanf("%d", &pessoa1.idade);
    printf("Informe o novo peso:\n");
    scanf("%f", &pessoa1.peso);
    printf("Informe um novo nome:\n");
    scanf(" %s", pessoa1.nome);

    //Mostrando os novos dados
    printf("Pessoa 1 agora tem as seguintes informações:\n");
    printf("\nIdade: %d\n", pessoa1.idade);
    printf("Peso: %.2f\n", pessoa1.peso);
    printf("Nome: %s\n", pessoa1.nome);

    return 1;
}