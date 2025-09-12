//Leia o raio e a altura de um cilindro e calcule seu volume.

#include <stdio.h>

int main(){
	float raio, altura, volume, pi;
	pi = 3.1415;
	
	printf("Digite o raio do cilindro: ");
	scanf("%f", &raio);
	
	printf("Digite a altura do cilindro: ");
	scanf("%f", &altura);
	
	volume = pi * raio * raio * altura;
	printf("O volume do cilindro eh: %.2fm^3", volume);
	
	return 0;
}
