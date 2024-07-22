#include <stdio.h>

int main(){
    int b1,b2,b3,b4;
    printf("\n[Conversor de Binario]\n\n");
    printf("Para converter um numero de binario em decimal com ate 4 digitos (1 ou 0)coloque um apos para uma ordem da esquerda para a direita.\n\n");
    
    printf("Primeiro numero (Seu numero ate agr _ _ _ _): ");
    scanf("%i", &b1);
    printf("Segundo numero (Seu numero ate agr %i _ _ _): ", b1);
    scanf("%i", &b2);
    printf("Terceiro numero (Seu numero ate agr %i %i _ _): ",b1,b2);
    scanf("%i", &b3);
    printf("Quarto numero (Seu numero ate agr %i %i %i _): ",b1,b2,b3);
    scanf("%i", &b4);

    b1 = b1*(2*2*2);
    b2 = b2*(2*2);
    b3 = b3*2;
    b4 = b4+b3+b2+b1;

    printf("Seu numero em decimal e %i", b4);

    return 0;
}