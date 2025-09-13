//Conversão de Tempo: Ler um valor em segundos e converter para hora, minutos e segundos

#include <stdio.h>

int main(){
	
	int segundos, ss, mm, hh;
	
	printf("Digite um tempo em segundos: ");
	scanf("%d", &segundos);
	
	hh = segundos / 3600;
	mm = (segundos % 3600) / 60;
	ss = (segundos % 3600) % 60;
	
	printf("%d segundos equivalem a: %.2dh:%.2dm:%.2ds", segundos, hh, mm, ss);



	return 0;
}
