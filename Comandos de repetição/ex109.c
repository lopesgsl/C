/*109. Escreva um programa que leia dois números inteiros M e N e um número inteiro X e 
imprima todos os divisores exatos de X existentes no intervalo [M, N].*/
#include <stdio.h>

int main(){
	int m, n, x, menor, maior;
	
	printf("\n----- Numeros do intervalo V4.0 -----\n");
    printf("Imprima um intervalo de numeros e depois um numero inteiro\neste programa ira percorrer este intervalo com o numero citado a procura de divisores exatos.\n\n");
	
	printf("Comeco do intervalo: ");
	scanf("%i", &m);
	printf("Fim do intervalo: ");
	scanf("%i", &n);
    printf("Digite um numero inteiro: ");
    scanf("%i", &x);
	
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

    printf("\nNo intervalo entre os numeros (%i a %i) foi: ",menor, maior);
	for (int i = menor; i <= maior; i++){
		if (x % i == 0)
        {
            printf("%i ", i);
        }
	}
	
	return 0;
}