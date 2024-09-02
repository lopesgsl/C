/*118. Escreva um programa que leia um número N e imprima os N primeiros números 
primos positivos.*/
#include <stdio.h>

int main(){
    int n, primo;
    int cont = 0, i = 1;
	
	printf("\n----- Numeros primos -----\n");
	
	printf("Digite um numero: ");
	scanf("%i", &n);
    printf("Os primeiros %d termos sao: ", n);
    
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