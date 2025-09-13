//Dia da semana

#include <stdio.h>

int main(){
	int dia;
	
	printf("Digite um dia: ");
	scanf("%d", &dia);
	
	if (dia == 1){
		printf("Domingo");
	}
	else if (dia == 2){
		printf("Segunda-feira");
	}
	else if (dia == 3){
		printf("Terca-feira");
	}
	else if (dia == 4){
		printf("Quarta-feira");
	}
	else if (dia == 5){
		printf("Quinta-feira");
	}
	else if (dia == 6){
		printf("Sexta-feira");
	}
	else if (dia == 7){
		printf("Sabado");
	}
	else {
		printf("Dia invalido");
	}
	
	
	return 0;
}


