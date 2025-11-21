#include <stdio.h>

float Fahrenheit(int celsius) {
    return (celsius * 1.8) + 32;
}

float Kelvin(int celsius) {
    return celsius + 273.15;
}

int main() {
    int celsius;

    printf("Informe a temperatura em celsius: ");
    scanf("%d", &celsius);

    float fahrenheit = Fahrenheit(celsius);
    float kelvin = Kelvin(celsius);

    printf("A sua temperatura em celsius convertida eh: %.2f Fahrenheit e %.2f kelvin \n\n", fahrenheit, kelvin);
}