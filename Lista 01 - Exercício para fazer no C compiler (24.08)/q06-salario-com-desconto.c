//Salário com Desconto - Leia o salário bruto de um funcionário e calcule o salário líquido, sabendo que há: INSS = 11% IR = 15% Mostre o valor dos descontos e o salário final. 

#include <stdio.h>

int main(){
	float salarioBruto, salarioLiquido;
	
	printf("Digite seu salario bruto: R$");
	scanf("%f", &salarioBruto);
	
	salarioLiquido = salarioBruto - (salarioBruto * 0,11) - (salarioBruto * 0,15);
	
	printf("O seu salario com descontos eh: R$%.2f\n", salarioLiquido);
	
	
	return 0;
}
