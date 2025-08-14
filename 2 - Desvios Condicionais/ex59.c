#include <stdio.h>

int main(){
    float a,b;

    printf("Informe o valor de A e o valor de B: ");
    scanf("%f%f", &a, &b);

    if(a > b){
        printf("A eh maior que B.\n\n");
    }
    else if(b > a){
        printf("B eh maior que A.\n\n");
    }
    else{
        printf("A eh igual a B.\n\n");
    }

    return 0;
}