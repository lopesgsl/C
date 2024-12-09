/* 151. Escreva um programa que leia o valor de uma precisão desejada pelo usuário e 
calcule o valor de Pi com esta precisão. A aproximação é calculada através da equação 
Pi = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ..., e assim sucessivameentre os dois últimos valoresnte. O processamento 
deve ser encerrado quando a variação  calculados for 
inferior à precisão desejada pelo usuário (Por exemplo 0.0001). */
#include <stdio.h>
#include <math.h>
#include <conio.h>

// PI = 3.141592653589793;

void main(){
    double preci, var1 = 4, var2 = 0, cont = 3, PI = 3.141592653589793;

    printf("Digite o valor da precisao: ");
    scanf("%lf", &preci);

    do
    {
        var1 -= 4/cont;
        cont+=2;
        var2 = var1;
        var2 += 4/cont; 
        printf("O valor de PI: %lf - %lf = %lf\n", var2, var1, var2 - var1);
        getch();
    } while (PI - var2 < preci);

    printf("O valor de PI: %lf, %lf", var2, var1);
    
    getch();

}