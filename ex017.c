#include <stdio.h>

int main(){
	float area, valor;
	
	printf("Calculadora do arquiteto\n");
	printf("Vou te ajudar a calcular o valor de trabalho de cada arquiteto\n");
	printf("Primeiro diga qual e o tamanho da area a ser trabalhada: ");
	scanf("%f", &area);
	printf("Agora diga o valor cobrador por area\n");
	scanf("%f", &valor);
	
	area = area *valor;
	printf("Sera cobrado R$%.2f para concluir esse projeto", area);
	return 0;
}