//Sal�rio com Desconto - Leia o sal�rio bruto de um funcion�rio e calcule o sal�rio l�quido, sabendo que h�: INSS = 11% IR = 15% Mostre o valor dos descontos e o sal�rio final. 

#include <stdio.h>

int main(){
	float salarioBruto, salarioLiquido;
	
	printf("Digite seu salario bruto: R$");
	scanf("%f", &salarioBruto);
	
	salarioLiquido = salarioBruto - (salarioBruto * 0,11) - (salarioBruto * 0,15);
	
	printf("O seu salario com descontos eh: R$%.2f\n", salarioLiquido);
	
	
	return 0;
}
