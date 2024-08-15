/*99. Escreva um programa que imprima todos os números inteiros entre 1 e 100 em ordem 
descendente.*/
#include <stdio.h>

int main(){
    printf("\n< Contador de 100-1 >\n\n");

    for (size_t i = 100; i >= 1; i--)
    {
        printf("%i\n", i);
    }
    
    return 0;
}