//Conversão de notas para conceito - Receba nota de 0 a 10 e converta para conceito

#include <stdio.h>

int main(){
	int nota;
	
	printf("Digite sua nota: ");
	scanf("%d", &nota);
	
	if (nota >= 0 && nota <= 10){
		if (nota >= 9 && nota <= 10){
			printf("Conceito A");
		}
		else if (nota >= 7 && nota <= 8.9){
			printf("Conceito B");
		}
		else if (nota >= 5 && nota <= 6.9){
			printf("Conceito C");
		}
		if (nota >= 3 && nota <= 4.9){
			printf("Conceito D");
		}
		if (nota < 3){
			printf("Conceito E");
		}
	}
		
	else {
		printf("Nota invalida");
	}
		
	return 0;	
}


