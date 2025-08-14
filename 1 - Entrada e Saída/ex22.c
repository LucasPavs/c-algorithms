#include <stdio.h>

int main() {
    int num, numII, mmult;

    printf("Digite dois numeros inteiros (A e B): ");
    scanf("%d %d", &num, &numII);

    if (num == 0) {
        printf("O valor de 'num' deve ser diferente de zero.\n");
        return 1;
    }

    mmult = (numII / num) * num;

    printf("O maior multiplo de %d menor ou igual a %d é %d\n", num, numII, mmult);


}
