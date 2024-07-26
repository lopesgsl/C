#include <stdio.h>

int main(){
    int num;

    printf("\nPar ou impar??\n\n");

    printf("Digite um numero: ");
    scanf("%i", &num);

    if (num%2 == 0)
    {
        printf("Seu numero e PAR.");
    }
    else{
        printf("Seu numero e IMPAR");
    }

    return 0;
}