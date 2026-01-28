#include <stdio.h>

int main() {
    int numeros[20];
    int pt = 0, ptb = 0, pmdb = 0, dem = 0, psdb = 0, pcdob = 0;
    int brancos = 0; // Votos em branco (partidos não listados)

    printf("Digite os 20 números dos deputados (entre 10000 e 99999):\n");

    for (int i = 0; i < 20; i++) {
        int numero;
        do {
            printf("Número %d: ", i + 1);
            scanf("%d", &numero);
            if (numero < 10000 || numero > 99999) {
                printf("Número inválido! Deve estar entre 10000 e 99999.\n");
            }
        } while (numero < 10000 || numero > 99999);

        numeros[i] = numero;

        int partido = numero / 1000; // Pega os dois primeiros dígitos

        switch (partido) {
            case 13:
                pt++;
                break;
            case 14:
                ptb++;
                break;
            case 15:
                pmdb++;
                break;
            case 25:
                dem++;
                break;
            case 45:
                psdb++;
                break;
            case 65:
                pcdob++;
                break;
            default:
                brancos++; // Conta como voto em branco
                break;
        }
    }

    printf("\nResultado da eleição por partido:\n");
    printf("PT (13): %d eleitos\n", pt);
    printf("PTB (14): %d eleitos\n", ptb);
    printf("PMDB (15): %d eleitos\n", pmdb);
    printf("DEM (25): %d eleitos\n", dem);
    printf("PSDB (45): %d eleitos\n", psdb);
    printf("PCdoB (65): %d eleitos\n", pcdob);
    printf("Votos em branco (partidos não listados): %d\n", brancos);

    return 0;
}
