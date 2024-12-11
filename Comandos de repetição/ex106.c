/*106. Escreva um programa que leia dois números inteiros M e N e calcule a média 
aritmética dos números do intervalo [M, N].*/
#include <stdio.h>

int main(){
    int m, n, menor, maior, media;
    float total = 0;
	
	printf("\n----- Numeros do intervalo V2.0 -----\n");
	
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

    media = maior - menor + 1;

	for (int i = menor; i <= maior; i++){
		total += i;
	}
	
	printf("A media aritmetica do intervalo entre os numeros (%i a %i) e de: %.1f",menor, maior, total/media);

    return 0;
}