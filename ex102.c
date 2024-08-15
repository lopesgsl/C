/*102. Escreva um programa que leia um número inteiro N e imprima todos os seus 
divisores exatos.*/

#include <stdio.h>

int main(){
    int num;

    printf("\n//////// Divisores Exatos ////////\n");

    printf("Digite um numero: ");
    scanf("%i", &num);

    printf("Os divisores exatos de %i sao:", num);
    for (int i = 0; i >= num; i++)
    {
        if (i%num == 0)
        {
            printf("%i ", i);
        }
    }
    
    return 0;
}