#include <stdio.h>
#include <math.h>

int main(){
	int n1, dobro, triplo, quadra, cubo, raiz;
	
	printf("Escolha um numero: ");
	scanf("%i", &n1);
	
	dobro = n1*2;
	triplo = n1*3;
	quadra = n1*n1;
	cubo = n1*n1*n1;
	raiz = sqrt(n1);
	
	printf("Dobro: %i\n", dobro);
	printf("Triplo: %i\n", triplo);
	printf("Ao Quadrado: %i\n", quadra);
	printf("Ao Cubo: %i\n", cubo);
	printf("Raiz Quadrada%i\n", raiz);
		
	return 0;
}