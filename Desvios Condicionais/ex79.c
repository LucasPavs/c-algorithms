#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;

    printf("Informe o valor de a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);

    int delta = pow(b,2) - (4 * a * c);

    if(delta == 0){
        printf("\nA equacao so tem uma raiz.\n\n");
    }
    else if(delta > 0){
        printf("\nA equacao tem duas raizes.\n\n");
    }
    else{
        printf("\nDelta negativo, nao tem raiz.\n\n");
    }

    return 0;
}
