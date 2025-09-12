// Potência Elétrica: ler um tensão e corrente e calcular a potência

#include <stdio.h>

int main(){
	float tensao, corrente, potencia;
	
	printf("Digite a tensao: ");
	scanf("%f", &tensao);
	
	printf("Digite a corrente: ");
	scanf("%f", &corrente);

	
	potencia = tensao * corrente;
	
	printf("A potencia eh igual a %.1fW", potencia);
	
		
	return 0;
}
