/*150. Escreva um programa que leia dois números inteiros positivos N e M e use o método 
das aproximações sucessivas de Newton para determinar a raiz enésima de M. De 
acordo com o método de Newton, são calculados diversos elementos xk, de acordo 
com as equações abaixo. Inicialmente, deve ser calculado o valor de x1. Se for 
necessário, devem ser calculados os valores de x2, x3 e assim sucessivamente. O 
cálculo dos números deve ser encerrado quando for gerado um valor xk de forma que 
o valor absoluto da diferença entre o valor de xk e o valor de xk-1 seja menor do que a 
precisão desejada. Quando isso acontece, o último xk gerado corresponde ao valor da 
raiz. Para calcular a raiz, considere x0 = 1 e a precisão de 0,0001. */
#include <stdio.h>
#include <conio.h>
#include <math.h>

const float precisao = 0.0001;

void main(){
    int n, m, cont = 1;
    float x0 = 1, x_ant, x_post;

    printf("\n\n        Calculadora de Raiz de enesima de M.\n\nUtilizando o metodo das aproximacoes de newton.\n\n");

    printf("Digite o numero N: ");
    scanf("%d", &n);//Entrada de N
    printf("Digite  o numero M: ");
    scanf("%d", &m);//Entrada de M

    //E criado o valor de x_ant (ou x1) com os valores de N e M
    x_ant = x0 - ((pow(x0,n) - m) / (n*pow(x0,n-1)));

    //Use o metodo ate a diferença do x_post e x_ant seja menor que 0.0001
    do
    {
        x_post = x_ant - ((pow(x_ant,n) - m) / (n*pow(x_ant,n-1)));
        x0 = x_ant;//E armazenado o valor de x_ant para a verificaçao
        x_ant = x_post;//Valor de x_ant e atualizado
        cont++;//Quantas vozes o loop foi feito e atualizado
    } while (x0 - x_post > precisao);

    printf("\nA Raiz enesima %d de %d = %f\n", n, m, x_post );
    
    getch();
}