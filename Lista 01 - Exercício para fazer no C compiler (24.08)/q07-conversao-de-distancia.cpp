//Conversão de Distância 

#include <stdio.h>

int main(){
	float km, m, dm, cm, mm;
	
	printf("Digite um valor em kilometros: ");
	scanf("%f", &km);
	
	m = km* 1000;
	dm = km* 10000;
	cm = km* 100000;
	mm = km* 1000000;
	
	printf("O equivalente em metros eh %.2fm\n", m);
	printf("O equivalente em decimetros eh %.2fdm\n", dm);
	printf("O equivalente em centimetros eh %.2fcm\n", cm);
	printf("O equivalente em milimetros eh %.2fmm\n", mm);
	
	
	return 0;
}
