// M�dia Aritm�tica: Leia 3 notas de um aluno, calcule e imprima a m�dia aritm�tica.

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
	
	printf("A media aritmetica eh: %.2f", media);
	
	
		
	return 0;
}
