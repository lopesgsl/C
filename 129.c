/*129. Escreva um programa que leia dois números inteiros M e N e imprima todos os pares 
(x, y) possíveis de forma que x e y pertençam ao intervalo [M, N] e y seja sempre maior 
ou igual a x*/
#include <stdio.h>

int main(){
    int m,n;

    printf("\n            Contador de intervalos pares.\n\n");
    printf("Digite o comeco do intervalo: ");
    scanf("%d", &m);
    printf("Digite o final do intervalo: ");
    scanf("%d", &n);

    for (int x = m; x <= n; x++)
    {
        for (int y = x; y <= n; y++)
        {
            printf("(%d,%d)\n", x,y);
        }
    }

    return 0;
}