// Conversão de Moeda: ler um valor em reais e a cotação do dolar e converter

#include <stdio.h>

int main(){
	float valorReal, cotacaoDolar, valorConvertido;
	
	printf("Digite um valor em real: ");
	scanf("%f", &valorReal);
	
	printf("Digite a cotacao do dolar: ");
	scanf("%f", &cotacaoDolar);

	
	valorConvertido = valorReal / cotacaoDolar;
	
	printf("R$%.2f equivalem a $%.2f", valorReal, valorConvertido);
	
		
	return 0;
}
