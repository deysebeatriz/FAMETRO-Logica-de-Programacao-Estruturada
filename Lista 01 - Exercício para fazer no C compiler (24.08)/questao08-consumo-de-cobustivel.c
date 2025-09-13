// Cálculo de consumo de combustível 

#include <stdio.h>

int main() {
    float distancia, litros, consumo;

    printf("Informe a distancia percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Informe o combustivel gasto (em litros): ");
    scanf("%f", &litros);


    if (litros <= 0) {
        printf("Quantidade invalida.\n");
    }

    consumo = distancia / litros;

    printf("Consumo de combustivel: %.2fkm/l\n", consumo);

    return 0;
}

