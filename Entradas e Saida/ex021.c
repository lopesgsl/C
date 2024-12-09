#include <stdio.h>

int main(){
	float lucro, preco;
	
	printf("---Calculadora de lucro---\n");
	printf("Digite o valor do produto: R$");
	scanf("%f", &preco);
	printf("Digite a margem de lucro desejada (limite de ate 100%): ");
	scanf("%f", &lucro);
	
	lucro = lucro/100;
	preco = preco+(preco*lucro);
	printf("Voce deve vender o produtor a uma bagatela de R$%.2f", preco);
	return 0;
}