#include <stdio.h>

int main(){
	int n, soma;
	
	printf("Digite o numero que deseje saber sua tabuada: ");
	scanf("%i", &n);
	
	printf("\n  +---Tabuada---+\n");
	for (int i = 0; i <= 10; i++){
		soma = n*i;
		printf("     %i X %i = %i  \n", n, i, soma);
	}
	printf("  +-------------+\n");
	
	return 0;
}