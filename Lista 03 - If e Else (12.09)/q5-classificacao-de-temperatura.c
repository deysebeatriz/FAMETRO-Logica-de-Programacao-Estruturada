// Classificação de temperatura

#include <stdio.h>

int main(){
	float tempCelsius;
	
	printf("Insira a temperatura em Celsius: ");
	scanf("%f", &tempCelsius);
	
	if (tempCelsius < 0){
		printf("A temperatura esta congelante!\n");
	}
	else if (tempCelsius <= 15){
		printf("Esta frio!\n");
	}
	else if (tempCelsius <= 25){
		printf("Esta agradavel!\n");
	}
	else if (tempCelsius <= 35){
		printf("Esta quente!\n");
	}
	else {
		printf("Esta muito quente!\n");
	}
	
	
	return 0;
}
