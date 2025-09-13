// Energia Cinética

#include <stdio.h>

int main() {
    float massa, velocidade, energiaCinetica;

    printf("Informe a massa do corpo em kg: ");
    scanf("%f", &massa);

    printf("Informe a velocidade do corpo em m/s: ");
    scanf("%f", &velocidade);

    energiaCinetica = (massa * velocidade * velocidade) / 2;

    printf("Energia cinetica do corpo: %.2fJ\n", energiaCinetica);

    return 0;
}

