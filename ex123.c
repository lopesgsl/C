/*123. Escreva um programa que leia dois números inteiros M e N e calcule os N primeiros 
números primos maiores ou iguais a M.*/
#include <stdio.h>

int main(){
    int n, m, primo;
    int cont = 0;
	
	printf("\n----- Numeros primos v2.0 -----\n");
	
	printf("Quantos numeros primos: ");
	scanf("%d", &n);
    printf("Maiores ou iguais a qual numero?: ");
	scanf("%d", &m);

    printf("Os primeiros %d termos maiores ou iguais a %d sao: ", n, m);
    
    int i = m;
    
    while (cont != n)
    {
        i++;
            primo = 1;

            for (int t = 2; t < i; t++) {
                if (i % t == 0) {
                    primo = 0;
                }
            }

            if (primo)
            {
                printf("%i ", i);
                cont++;
            }
    }

    return 0;
}