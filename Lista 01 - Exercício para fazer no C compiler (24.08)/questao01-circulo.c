//Fa�a um programa em C que leia o raio de um c�rculo e calcule: 1. O comprimento da circunfer�ncia. 2. A �rea do c�rculo. 

#include <stdio.h>


int main() {
	
	float raio, comprimento, pi, area;
	pi = 3.14;
	
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	
	comprimento = 2 * pi * raio;
	area = pi * raio * raio;
	
	printf("O comprimento da circunferencia eh: %.2f\n", comprimento);
	printf("A area do circulo eh: %.2f\n", area);
	
	
	
	
	return 0;
}
