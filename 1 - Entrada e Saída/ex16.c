#include <stdio.h>

int main(){
char letra;

printf("Digite uma letra minuscula: ");
scanf("%c",&letra);

if(letra >= 'a' && letra <= 'z'){
    char maiuscula = letra - 32;
    printf("A letra maiuscula: %c\n", maiuscula);
} else {
    printf("Você não digitou uma letra minúscula.\n");
}

return 0;

}