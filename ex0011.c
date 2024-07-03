#include <stdio.h>

int main (){
	float real, dolar, cota;
	
	printf("Deseja converter Real (BRL) em Dolar (USD)?\nDigite o valor em Real: R$");
	scanf("%f", &real);
	printf("Digite o valor atual do dolar: US$");
	scanf("%f", &cota);
	
	dolar = real*cota;
	
	printf("O valor convertido e R$%.2f", dolar);
	return 0;
}