#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    float distancia;
  
    printf("Digite a coordenada X do ponto P: ");
    scanf("%f", &x1);
    printf("Digite a coordenada Y do ponto P: ");
    scanf("%f", &y1);
 
    printf("Digite a coordenada X do ponto Q: ");
    scanf("%f", &x2);
    printf("Digite a coordenada Y do ponto Q: ");
    scanf("%f", &y2);
    
    // Calculando a distância euclidiana
    distancia = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
 
    printf("A distancia entre os pontos P(%.2f, %.2f) e Q(%.2f, %.2f) eh: %.2f\n", 
           x1, y1, x2, y2, distancia);
    
    // O getchar() pode ser removido ou substituído por outro método de espera, se necessário
    // getchar();
    return 0;
}
