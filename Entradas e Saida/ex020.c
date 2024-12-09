#include <stdio.h>

int main(){
	float comp, lag, m;
	
	printf("Secretaria de infrestrutura da Sousa\n");
	printf("Deseja comprar um terreno em nossa cidade?\n");
	printf("Quantos metros e o comprimento do terreno desejado: ");
	scanf("%f", &comp);
	printf("Quantos metros e a largura do terreno desejado: ");
	scanf("%f", &lag);
	
	m = lag*comp;
	
	printf("O valor do terreno e: R$%.2f (R$300,00 para cada Metro quadrado)", m*300);
	return 0;
}