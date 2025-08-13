    #include <stdio.h>  

    const int lines = 6;
    const int columns = 10;
    
    int main() {
        char matrix[lines][columns], i, j;   
        int cont_acertos;

        for (i = 0; i < lines; i++) {
            for (j = 0; j < columns; j++) {
                printf("Informe o elemento que deseja colocar na posição a%d,%d da matriz: ", i + 1, j + 1);
                scanf(" %c", &matrix[i][j]);
            }
        }   

        for (i = 1; i < lines; i++) {
            cont_acertos = 0;
            for (j = 0; j < columns; j++) {
                if (matrix[i][j] == matrix[0][j]) {
                    cont_acertos++;
                }
            }
            printf("O %dº aluno obteve a seguinte nota: %d/10. \n", i + 1, cont_acertos);
        }   
        
        return 0;
    }