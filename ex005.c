#include <stdio.h>

int main(){
	float n1, compri, circo;
	
	printf("Escolha um numero: ");
	scanf("%f", &n1);
	
	compri = n1*2;
	circo = n1*n1*3.1415926535898;
	
	printf("%.2f\n", compri);
	printf("%.2f\n", circo);
	
	return 0;
}