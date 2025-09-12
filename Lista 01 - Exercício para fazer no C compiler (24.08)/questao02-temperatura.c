//Faça um programa que leia uma temperatura em graus Celsius e converta para Fahrenheit. Fórmula: F=(C×9/5)+32F = (C \times 9/5) + 32F=(C×9/5)+32 

#include <stdio.h>

int main(){
	
	float tempCelsius, tempFahrenheit;
	
	printf("Digite uma temperatura em Celsius: ");
	scanf("%f", &tempCelsius);
	
	tempFahrenheit = (tempCelsius * 9/5) + 32;
	printf("A temperatura em Fahrenheit eh: %.1fF", tempFahrenheit);
	
	return 0;
}
