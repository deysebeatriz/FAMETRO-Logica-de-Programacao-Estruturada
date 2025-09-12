//Leia o raio de um círculo e calcule a área 

#include <stdio.h>


int main() {
	
	float raio, pi, area;
	pi = 3.14;
	
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	
	area = pi * raio * raio;
	printf("A area do circulo eh: %.2f\n", area);
	
	
	return 0;
}
