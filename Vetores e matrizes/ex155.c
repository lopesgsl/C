#include <stdio.h>
#include <conio.h>

void main(){
    int num[10],n;

    printf("\n               Vertores do N-enesimo termo\n\n");

    printf("Digite o termo N: ");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }

    printf("\nO numero %d da lista e: %d", n, num[n]);

    
    getch();
}