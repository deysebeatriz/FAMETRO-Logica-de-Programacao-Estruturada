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
	
	if (L1 == L2 && L1 == L3){
		printf("equilatero");
	}
	
	else if (L1 != L2 && L1 != L3){
		printf("escaleno");
	}
	
	
	return 0;
}

