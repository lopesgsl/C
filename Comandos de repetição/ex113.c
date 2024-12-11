/*113. Escreva um programa que leia dois números inteiros M e N e imprima todos os 
números primos existentes no intervalo [M, N].*/
#include <stdio.h>

int main(){
    int m, n, menor, maior, primo;
	
	printf("\n----- Numeros do intervalo V5.0 -----\n");
	
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

	for (int i = menor; i <= maior; i++)
    {
        if (i < 2) 
        {
            continue;
        }

        primo = 1;

        for (int t = 2; t < i; t++) {
            if (i % t == 0) {
                primo = 0;
                break;
            }
        }

        if (primo)
        {
            printf("%i ", i);
        }
        
	}

    return 0;
}