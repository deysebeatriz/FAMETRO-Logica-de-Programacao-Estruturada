// Jogo de nível
#include <stdio.h>

int main(){
	int pontuacao;
	
	printf("Insira uma pontuacao: ");
	scanf("%d", &pontuacao);
	
	if (pontuacao >= 0 && pontuacao <=1000){
		if (pontuacao < 100) {
			printf("Seu nivel eh Iniciante!\n");
		}
		else if (pontuacao <= 299){
			printf("Seu nivel eh Aprendiz!\n");
		}
		else if (pontuacao <= 599){
			printf("Seu nivel eh Intermediario!\n");
		}
		else if (pontuacao <= 899){
			printf("Seu nivel eh Avancado!\n");
		}
		else if (pontuacao >= 900){
			printf("Seu nivel eh Mestre!\n");
		}
		}
	
	else {
		printf("Pontuacao invalida!\n");
	}
	
	
	return 0;
}
