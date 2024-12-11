#include <stdio.h>

int main(){
    int num, tri;

    printf("\n::::::: Qual trimestre? ::::::::\n\n");

    printf("Digite um numero do mes: ");
    scanf("%i", &num);

    if (num < 1 || num > 12) {
        printf("\nImagino que voce criou um mes imaginario. Tente os 12 existentes.\n");
    } else if (num <= 3) {
        printf("\nO mes em questao esta no primeiro trimestre.\n");
    } else if (num <= 6) {
        printf("\nO mes em questao esta no segundo trimestre.\n");
    } else if (num <= 9) {
        printf("\nO mes em questao esta no terceiro trimestre.\n");
    } else {
        printf("\nO mes em questao esta no quarto trimestre.\n");
    }

    return 0;
}