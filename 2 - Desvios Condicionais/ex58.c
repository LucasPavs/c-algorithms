#include <stdio.h>

int main(){
int a;

printf("Informe o valor: ");
scanf("%d", &a);

if( a % 2 == 0 ){
    printf("O numero eh par.\n\n");
}
else{
    printf("O numero eh impar.\n\n");
}

return 0;
}