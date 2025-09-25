#include <stdio.h>

void quebraLinha(int linhas) {
    if (linhas > 0) {
    printf("\n");
    quebraLinha(linhas-1);
    }
}

int main() {
    int lines;

    printf("Informe o número de linhas que deseja pular: ");
    scanf("%d", &lines);
    
    quebraLinha(lines);
}