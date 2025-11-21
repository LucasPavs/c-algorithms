#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;

    printf("Informe o valor de a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);

    int delta = pow(b,2) - (4 * a * c);

    if(delta == 0){
        int x1 = -b / (2 * a);
        printf("\nA raiz da equacao eh: %d\n\n", x1);
    }
    else if(delta > 0){
        int x1 = (-b + pow(delta,2)) / (2 * a); 
        int x2 = (-b - pow(delta, 2)) / (2 * a);

        printf("\nAs raizes da equacao sao: x1 = %d e x2 = %d.\n\n", x1, x2);
    }
    else{
        printf("\nDelta negativo, nao tem raiz.\n\n");
    }

    return 0;
}
