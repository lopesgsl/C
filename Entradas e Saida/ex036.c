#include <stdio.h>

int main(){
    int a,b;

    printf("\nPermutacao de numeros\n");

    printf("\nNumero a: ");
    scanf("%i", &a);
    printf("Numero b: ");
    scanf("%i", &b);

    printf("\nA = %i", a);
    printf("\nB = %i", b);

    int temp = a;
    a = b;
    b = temp;

    printf("\n\nA = %i", a);
    printf("\nB = %i", b);

    return 0;
}