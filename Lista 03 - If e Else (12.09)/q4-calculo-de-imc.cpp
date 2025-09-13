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
	printf("\n");
	
	if (peso > 0 && altura >0){
		if (IMC < 18.5) {
			printf("Voce esta Abaixo do Peso!\n");
		}
		else if (18.5 <= IMC && IMC <= 24.9){
			printf("Voce esta no Peso Normal!\n");
		}
		else if (25 <= IMC && IMC <= 29.9){
			printf("Voce esta Sobrepeso!\n");
		}
		else if (30 <= IMC && IMC <= 34.9){
			printf("Voce esta em Obesidade I!\n");
		}
		else if (35 <= IMC  && IMC <= 39.9){
			printf("Voce esta em Obesidade II!\n");
		}
		else {
			printf("Voce esta em Obesidade III!\n");
		}
		}
	
	else {
		printf("Valor invalido!\n");
	}
	
	return 0;
}


