#include <stdio.h>

/*
 * Usamos 'extern' para AVISAR ao compilador que a variável 'modo_de_operacao'
 * existe em outro arquivo. Este arquivo apenas a referencia, não a cria.
 */
extern int modo_de_operacao;

int main() {
    printf("Verificando o modo de operação...\n");

    // Acessando a variável que foi definida em config.c
    if (modo_de_operacao == 1) {
        printf("O programa está em modo normal.\n");
    } else {
        printf("O programa está em modo de manutenção.\n");
    }

    return 0;
}
//Para que o programa funcione, você precisa compilar os dois arquivos .c juntos. 
//O compilador irá gerar os arquivos objeto e o linker (ligador) irá juntá-los, resolvendo a referência da extern.