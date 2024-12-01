/*146. Escreva um programa que leia dois números inteiros M e N e calcule os valores de M 
div N e M mod N. Os valores devem ser calculados sem o uso dos operadores div e 
mod.*/
#include <stdio.h>

void main(){
    int m, n, mod = 0, div = 0;

    printf("\n[[[[ Divisao ]]]]\n\n");

    printf("Digite o numero M: ");
    scanf("%d", &m);
    printf("Digite o numero N: ");
    scanf("%d", &n);

    for (int i = m; i > 0;)
    {
        if (i >= n)
        {
            div++;
            i -= n;
        }
        else
        {
            mod = i;
            i = 0;
        }
    }
    
    printf("\n%d / %d = %d\n",m,n,div);
    printf("Com resto: %d", mod);

}