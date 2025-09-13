//Inversão de Velocidade

#include <stdio.h>

int main() {
    float kmh, ms;

    printf("Informe a velocidade em km/h: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6;

    printf("Velocidade em m/s: %.2fm/s\n", ms);

    return 0;
}

