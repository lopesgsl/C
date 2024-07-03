#include <stdio.h>

int main(){
	float n1, compri, circo;
	
	printf("Calculadora do circuloS\nEscolha um numero: ");
	scanf("%f", &n1);
	
	compri = n1*2;
	circo = n1*n1*3.1415926535898;
	
	printf("Comprimento: %.2f\n", compri);
	printf("Circuferencia: %.2f\n", circo);
	
	return 0;
}