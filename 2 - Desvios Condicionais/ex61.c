#include <stdio.h>

  int main(){
  int num;

  printf("Digite um numero: ");
  scanf("%d", &num);

  if(num < 0){
    printf("O valor absoluto desse num eh: %d\n\n", num * -1);
  }
  else{
    printf("O valor absoluto desse num eh: %d\n\n", num);
  }
  return 0;
}