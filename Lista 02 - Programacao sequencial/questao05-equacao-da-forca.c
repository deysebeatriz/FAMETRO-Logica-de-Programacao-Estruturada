//Equação da Força: ler massa e aceleração e calcular a força restante 

#include <stdio.h>

int main() {
	
	float massa, aceleracao, forcaResultante;
	
	printf("Digite a massa (em kg): ");
	scanf("%f", &massa);

	printf("Digite a aceleracao (em m/s): ");
	scanf("%f", &aceleracao);	
	
	forcaResultante = massa * aceleracao;
	printf("A forca resultante eh: %.2fN\n", forcaResultante);
	
	
	
	return 0;
}
