#include <stdio.h>

int main(){
	int razao, inicial, pg;
	
	printf("------GERADOR DE PROGRESSAO ARITIMETICA------\n\n");
	printf("Inicial: ");
	scanf("%i", &inicial);
	printf("Razao: ");
	scanf("%i", &razao);
	
	printf("\n%i, ", inicial);
	pg = inicial;
	for(int i = 1; i <= 4; i++){
		pg += razao;
		printf("%i, ", pg);
	}
	pg += razao;
	printf("%i", pg);
	
	return 0;
}