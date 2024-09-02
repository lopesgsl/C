/*121. Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e 
um número inteiro N e imprima todos os termos da progressão menores ou iguais a N 
(caso a razão seja positiva) ou todos os termos maiores ou iguais a N (caso a razão seja 
negativa). */
#include <stdio.h>

int main(){
    int termo, razao, n;

    printf("\n                Progressao ariotmetica P.A v2.0\n\n");

    printf("Termo: ");
    scanf("%d", &termo);
    printf("razao: ");
    scanf("%d", &razao);
    printf("Delimitador:  ");
    scanf("%d", &n);


    if (n > 0)
    {
       for (int i = termo; i <= n; i+=razao)
        {
            if (i <= n)
            {
                printf("%d ", i);
            }
            
        } 
    }
    
    else
    {
        for (int i = termo; i >= n; i+=razao)
        {
            if (i >= n)
            {
                printf("%d ", i);
            }
        }
    }
    return 0;
}