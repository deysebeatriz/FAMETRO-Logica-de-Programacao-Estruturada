//Calculo de IMC

#include <stdio.h>

int main(){
	float peso, altura, IMC;
	
	printf("Digite seu peso (em kg): ");
	scanf("%f", &peso);
	
	printf("Digite sua altura (em m): ");
	scanf("%f", &altura);
	
	IMC = peso / (altura * altura);
	printf("Seu IMC eh: %.2f", IMC);
	
	return 0;
}
