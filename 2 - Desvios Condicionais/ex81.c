#include <stdio.h>
#include <math.h>

int main(){
    float x1, x2, y1, y2, raio;

    printf("Informe o valor de x1 e y1: ");
    scanf("%f%f", &x1, &y1);

    printf("Informe o valor de x2 e y2: ");
    scanf("%f%f", &x2, &y2);

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    float distancia = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    if(distancia > raio){
        printf("\nO ponto esta fora da circunferencia.");
    }
    else if(distancia < raio){
        printf("\nO ponto esta dentro da circunferencia.");
    }
    else{
        printf("\nO ponto esta na superficie da circunferencia.");
    }
    
    return 0;
}