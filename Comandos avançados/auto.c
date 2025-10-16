#include <stdio.h>

// Função que demonstra o uso da palavra-chave 'auto'
void demonstrar_auto() {
    printf("--- Dentro da funcao 'demonstrar_auto' ---\n");

    // Exemplo 1: Declarando uma variável com 'auto'
    // Esta variável tem escopo local e duração automática.
    // Ela só existe enquanto esta função estiver sendo executada.
    auto int contador_com_auto = 10;
    printf("O valor de 'contador_com_auto' é: %d\n", contador_com_auto);

    // Exemplo 2: Declarando uma variável da forma convencional
    // Esta variável TAMBÉM tem escopo local e duração automática por padrão.
    // O comportamento dela é idêntico ao da variável acima.
    int contador_sem_auto = 20;
    printf("O valor de 'contador_sem_auto' é: %d\n", contador_sem_auto);
    
    printf("--- Saindo da funcao 'demonstrar_auto' ---\n\n");
}


int main() {
    printf("Chamando a funcao pela primeira vez:\n");
    demonstrar_auto();

    printf("Chamando a funcao pela segunda vez:\n");
    demonstrar_auto();

    // A linha abaixo causaria um ERRO DE COMPILAÇÃO se fosse descomentada,
    // porque as variáveis 'contador_com_auto' e 'contador_sem_auto'
    // não existem fora da função 'demonstrar_auto'.
    //
    // printf("%d", contador_com_auto); // ERRO: 'contador_com_auto' undeclared

    return 0;
}