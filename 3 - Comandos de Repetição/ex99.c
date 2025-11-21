#include <stdio.h>

int main(){
    int num;
    num = 100;

    while(num <= 100 && num >= 0){
        printf("%d\n", num);
        num--;
    }

    return 0;

}