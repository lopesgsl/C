#include <stdio.h>

int main(){
	float km, ms, tempo, kmh;
	
	printf("Digite alguma kilometragem percorrida: ");
	scanf("%f", &km);
	printf("Agora quantas horas foram necessarias para concluir o pesco�o: ");
	scanf("%f", &tempo);
	
	kmh = km/tempo;
	ms = kmh*3.6;
	
	printf("Voce percorreu em metros por segundos um total de: %f M/s", ms);
	return 0;
}