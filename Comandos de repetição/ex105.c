/*105. Escreva um programa que leia dois números inteiros M e N e calcule a soma de todos 
os números do intervalo [M, N].*/
#include <stdio.h>

int main(){
	int m, n, total = 0, menor, maior;
	
	printf("\n----- Numeros do intervalo -----\n");
	
	printf("Digite um numero: ");
	scanf("%i", &m);
	printf("Digite outro numero: ");
	scanf("%i", &n);
	
    if (m > n)
    {
        maior = m;
        menor = n;
    }
    else
    {
        maior = n;
        menor = m;
    }
    
	for (int i = menor; i <= maior; i++){
		total += i;
	}

	printf("A somatoria do intervalo entre os numeros (%i a %i) foi: %i",menor, maior, total);
	
	return 0;
}