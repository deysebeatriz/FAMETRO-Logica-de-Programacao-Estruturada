// Classifica��o de temperatura

#include <stdio.h>

int main(){
	float tempCelsius;
	
	printf("Insira a temperatura em Celsius: ");
	scanf("%f", tempCelsius);
	
	if (tempCelsius < 0){
		printf("A temperatura est� congelante!/n");
	}
	
	return 0;
}
