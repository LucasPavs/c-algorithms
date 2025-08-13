#include <stdio.h>

int main() {
    int num, m, c, d, u;

    for (num = 1000; num <= 9999; num++) {
        m = num / 1000;
        c = (num / 100) % 10;
        d = (num / 10) % 10;
        u = num % 10;

        if (m == u && c == d) {
            printf("%d\n", num);
        }
    }

    return 0;
}
