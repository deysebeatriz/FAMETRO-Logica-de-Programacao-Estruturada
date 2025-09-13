// Comparacao de 3 numeros

#include <stdio.h>

int main(){
	int primeiro, segundo, terceiro;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &primeiro);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &segundo);
	
	printf("Digite o terceiro valor: ");
	scanf("%d", &terceiro);
	
	if ((primeiro == segundo) || (primeiro == terceiro) || (segundo == terceiro)){
		printf("Os numeros devem ser diferentes\n");
	}
	
	else {
		printf("Maior, menor e o do meio, respectivamente: \n");
		if ((primeiro > segundo) && (primeiro > terceiro)){
			if (segundo > terceiro){
				printf("%d, %d, %d", primeiro, terceiro, segundo);
			}
			else {
				("%d, %d, %d", primeiro, segundo, terceiro);
			}
		}
			
		else if ((segundo > primeiro) && (segundo > terceiro)){
			if (primeiro > terceiro){
				printf("%d, %d, %d", segundo, terceiro, primeiro);
			}
			else{
				printf("%d, %d, %d", segundo, primeiro, terceiro);
			}
		}
		
		else if ((terceiro > primeiro) && (terceiro > segundo)){
			if (primeiro > segundo){
				printf("%d, %d, %d", terceiro, segundo, primeiro);
			}
			else{
				printf("%d, %d, %d", terceiro, primeiro, segundo);
			}
		}
			
	}

	
	return 0;
}

