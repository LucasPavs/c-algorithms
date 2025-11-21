#include <stdio.h>

int produto(int x, int y) {
    if (y == 1) {
        return x;
    }
    return produto(x, y-1) + x;
}

int main() {
    int x, y;

    scanf("%d%d", &x, &y);
    int var = produto(x,y);
    printf("%d",var);

    return 0;
}