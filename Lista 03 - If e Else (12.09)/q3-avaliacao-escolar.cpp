// avaliacao escolar

#include <stdio.h>

int main(){
	float nota1, nota2, nota3, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	
	if (media < 4){
		printf("Reprovado\n");
	}
	else if (4 <= media < 6){
		printf("Recuperacao!\n");
	}
	else if (6 <= media <=10){
		printf("Aprovado!\n");
	}

	else {
		printf("Nota invalida\n");
	}
	
	
	return 0;
}
