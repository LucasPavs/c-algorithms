#include <stdio.h>

int main(){
    int a,b,c;

    printf("Informe o primeiro, segundo e terceiro valor: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a > b && a > c){
        printf("\nO maior numero eh %d.\n\n", a);
        if(b > c){
            printf("\nO menor numero numero eh %d.\n\n", c);
        }
        else{
            printf("\nO menor numero numero eh %d.\n\n", b);
        }
    }
    else if (b > a && b > c){
        printf("\nO maior numero eh %d.\n\n", b);
        if(a > c){
            printf("\nO menor numero numero eh %d.\n\n", c);
        }
        else{
            printf("\nO menor numero numero eh %d.\n\n", a);
        }
    }
    else{ 
        printf("\nO maior numero eh %d.\n\n", c);
        if(a > b){
            printf("\nO menor numero numero eh %d.\n\n", b);
        }
        else{
            printf("\nO menor numero numero eh %d.\n\n", a);
        }
    }

    return 0;
}