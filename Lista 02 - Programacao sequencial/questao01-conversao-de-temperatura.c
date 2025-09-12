//Faça um programa que leia uma temperatura em graus Celsius e converta para Fahrenheit e Kelvin

#include <stdio.h>

int main(){
	
	float tempCelsius, tempFahrenheit, tempKelvin;
	
	printf("Digite uma temperatura em Celsius: ");
	scanf("%f", &tempCelsius);
	
	tempFahrenheit = (tempCelsius * 9/5) + 32;
	tempKelvin = tempCelsius + 273.15;
	printf("A temperatura em Fahrenheit eh: %.1fF\n", tempFahrenheit);
	printf("A temperatura em Kelvin eh: %.1fK\n", tempKelvin);
	
	return 0;
}
