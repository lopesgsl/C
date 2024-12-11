#include <stdio.h>

int main(){
    int m, n;

    printf("(((((( Sera que e multiplo? ))))))");

    printf("Digite um numero: ");
    scanf("%i", &m);
    printf("Digite outro numero: ");
    scanf("%i", &n);

    if (m%n == 0)
    {
        printf("O numero %i e multiplo de %i.\n", m, n);
    }
    else{
        printf("O numero %i não e multiplo de %i.\n", m, n);
    }
    


    return 0;
}