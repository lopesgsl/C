#include <stdio.h>
#include <conio.h>

void main(){
    int num[10], n;

    printf("\n       Aparecimento do N\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }
    
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    printf("O numero %d apareceu nessas posicoes na lista [0 - 9]: ");
    for (int i = 0; i < 10; i++)
    {
        if (num[i] == n)
        {
            printf("%d ", i);
        }
    }

    getch();
}