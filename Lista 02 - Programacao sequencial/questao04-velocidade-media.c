//eq. da velocidade media: ler distancia e tempo e calcular velocidade media

#include <stdio.h>

int main() {
	
	float distancia, tempo, velocidadeMedia;
	
	printf("Digite a distancia (em metros): ");
	scanf("%f", &distancia);

	printf("Digite o tempo (em segundos): ");
	scanf("%f", &tempo);	
	
	velocidadeMedia = distancia / tempo;
	printf("A velocidade media eh: %.2fm/s\n", velocidadeMedia);
	
	
	
	return 0;
}
