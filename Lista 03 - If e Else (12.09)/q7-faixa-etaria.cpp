// Faixa etaria
#include <stdio.h>

int main(){
	int idade;
	
	printf("Insira uma idade: ");
	scanf("%d", &idade);
	
	if (idade >= 0){
		if (idade <= 2) {
			printf("eh um bebe\n");
		}
		
		else if (idade <= 12) {
			printf("eh uma crianca\n");
		}
		
		else if (idade <= 17) {
			printf("eh um adolescente\n");
		}
		
		else if (idade <= 59) {
			printf("eh um adulto\n");
		}
		else {
			printf("eh um idoso\n");
		}
			
	}
	
	else {
		printf("Idade invalida!\n");
	}
	
	
	return 0;
}
