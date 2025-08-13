#include <stdio.h>

int main() {
    char letra_original, letra_substituta, nova_letra_original;
    int deslocamento, nova_letra_substituta;

    printf("Letra original (A a Z): ");
    scanf(" %c", &letra_original);  // espaço antes do %c para ignorar enter anterior

    printf("Letra substituta correspondente (A a Z): ");
    scanf(" %c", &letra_substituta);

    printf("Outra letra da mensagem original (A a Z): ");
    scanf(" %c", &nova_letra_original);

    int letra_original_num = letra_original - 'A';
    int letra_substituta_num = letra_substituta - 'A';
    int nova_letra_original_num = nova_letra_original - 'A';

    deslocamento = letra_substituta_num - letra_original_num;
    nova_letra_substituta = nova_letra_original_num + deslocamento;

    if (nova_letra_substituta >= 26)
        nova_letra_substituta -= 26;
    if (nova_letra_substituta < 0)
        nova_letra_substituta += 26;

    char letra_resultado = nova_letra_substituta + 'A';

    printf("Letra substituta: %c\n\n", letra_resultado);

    return 0;
}

