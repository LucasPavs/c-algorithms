#include <stdio.h>

int main(){
    int x,y;

    printf("Informe o valor de X e Y: ");
    scanf("%d%d", &x, &y);

    if(x != 0 && y != 0){
    if(x > 0 && y > 0 ){
        printf("\nQuadrante superior direito.\n\n");
    }
    else if(x > 0 && y < 0){
        printf("\nQuadrante inferior direito.\n\n");
    }
    else if(x < 0 && y > 0){
        printf("\nQuadrante superior esquerdo.\n\n");
    }
    else{
        printf("\nQuadrante inferior esquerdo.\n\n");
    }
    }
    else{
        printf("\nNao pertence a nenhum quadrante.\n\n");
    }

    return 0;
}