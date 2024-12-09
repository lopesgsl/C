#include <stdio.h>

int main(){
    float gasto;

    printf("\n------CONTA------\n");
    printf("Valor gasto: R$");
    scanf("%f", &gasto);

    gasto = (gasto+(gasto*0.1))+10;

    printf("\nFoi gasto no total R$ %.2f", gasto);

    return 0;
}