#include <stdio.h>

int main(){
    int num1, num2, num3, maior, menor, meio;

    printf("\n//////// O maior numero ///////\n");

    printf("Digite um numero: ");
    scanf("%i", &num1);
    printf("Digite um numero: ");
    scanf("%i", &num2);
    printf("Digite um numero: ");
    scanf("%i", &num3);

    maior = num1;
    if(num2 > maior){
        maior = num2;
    }
    if (num3 > maior)
    {
        maior = num3;
    }
    
    menor = num1;
    if (num2 < menor)
    {
        menor = num2;
    }
    if (num3 < menor)
    {
        menor = num3;
    }
    
    meio = num1 + num2 + num3 - maior - menor;
    
    printf("A ordem do maior ao menor e %i > %i > %i.\n", maior, meio,menor);
    
    return 0;
}