#include <stdio.h>

int main(){

int num;

printf("Digite o numero de 0 a 999: ");
scanf("%d", &num);

int c = num / 100;;
int d = (num / 10) % 10;
int u = num % 10;

int reverso = (num >= 100) * (u * 100 + d * 10 + c)
+ (num >= 10 && num < 100) * (u * 10 + d)
+ (num < 10) * u;

printf("O reverso do seu numero eh: %03d \n", reverso);
}