#include <stdio.h>
 int main(){
    int M, N;

    printf("Informe o primeiro termo do intervalo: ");
    scanf("%d", &M);

    printf("Informe o ultimo termo do intervalo: ");
    scanf("%d", &N);

    for(int x = M; x <= N; x += 2){
        if(x % 2 != 0){
            x += 1;
        }
        int y = x + 2;
        printf("%d, %d\n", x, y);
    }   
    return 0;
 }