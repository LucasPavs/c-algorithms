#include <stdio.h>
const int carne = 300;
const int kg = 1000;

int main(){
    int pessoas, quilo, grama;
    quilo = 0;

    printf("Quantas pessoas vao para o churras: ");
    scanf("%d", &pessoas);

    grama = pessoas * carne;

    if( grama > kg ){
        quilo += grama / kg;
        grama = grama % kg;

        printf("Precisara de %d Kg e %d g de carne.\n\n", quilo, grama);
    }
    else{
        printf("Precisara de %d g de carne \n\n.", grama);
    }

    return 0;
}