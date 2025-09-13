// Validacao de triangulo

#include <stdio.h>

int main(){
	int L1, L2, L3;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &L1);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &L2);
	
	printf("Digite o terceiro valor: ");
	scanf("%d", &L3);
	
	if(L1 < L2 + L3 && L2 < L1 + L3 && L3 < L1 +L2) {
		printf("forma um triangulo ");
		if (L1 == L2 && L1 == L3){
			printf("Equilatero");
		}
		else if (L1 != L2 && L1 != L3 && L2 != L3) {
			printf("Escaleno");
		}
		
		else {
			printf("Isósceles");
		}
	}
	
	else{
		printf("Nao eh um triangulo\n");
	}
		
	return 0;
}

