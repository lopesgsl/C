#include <stdio.h>

int main(){
     int num, cen, dez, uni, rev;

     printf("\n(((((((Seu numero ao reverso))))))))\n");
     printf("Como o nome e auto explicativo digite um numero inteiro de 1 a 999 e irei inverter ele.\n\n");
     
     printf("Numero (1 a 999): ");
     scanf("%i", &num);

     cen = num/100;
     dez = num/10%10;
     uni = num%10;
     rev = uni*100+dez*10+cen;

     printf("\nSeu numero fica formatado da seguinte forma %i.", rev);


    return 0;
}