#include <stdio.h>

int main(){
    int m;

    printf("\n==========Conversor de metros=========\n");
    
    printf("\nMetros: ");
    scanf("%i", &m);

    printf("\nQuilometros = %i", m/1000);
    printf("\nHactometros = %i", m/100);
    printf("\nDecametros = %i", m/10);
    printf("\nDecimetros = %i", m*10);
    printf("\nCentimetros = %i", m*100);
    printf("\nMilimetros = %i", m*1000);


    return 0;
}