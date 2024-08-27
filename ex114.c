/*114. Escreva um programa que leia dois números inteiros M e N e calcule o valor de MN
. A 
potenciação deve ser calculada através de um comando de repetição, sem a utilização 
de qualquer função oferecida pela linguagem de programação. */
#include <stdio.h>

int main(){
    int n, m, base = 1;

    printf("\n((( Potencia )))\n\n");

    printf("Digite a base da potencia: ");
    scanf("%i", &m);
    printf("Digite o expoente da potencia: ");
    scanf("%i", &n);

    for (int i = 1; i < n; i++)
    {
        base *= m;
    }
    
    printf("Resultado da potencia -> %i", base);

    return 0;
}