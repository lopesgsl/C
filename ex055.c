#include <stdio.h>

int main(){
    float sal, ped, aju, custo;

    printf("\n[[[[[[[[[ Custo da empreitada ]]]]]]]]]\n\n");

    printf("Valor da diaria dos pedreiros: R$");
    scanf("%f", &sal);
    printf("Quantidade de predeiros: ");
    sccanf("%f", &ped);
    printf("Quantidade de ajudantes: ");
    scanf("%f", &aju);

    custo = ((ped*sal)+(aju*(sal/2)))*180;
    
    printf("Voce gastou no total R$%.2f", custo);
    return 0;
}