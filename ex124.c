/*124. Escreva um programa que imprima os seis primeiros pares de números primos 
gêmeos. Dois números são chamados de primos gêmeos se eles forem primos e a 
diferença entre os dois for igual a 2. (Por exemplo, 11 e 13 são primos gêmeos).*/
#include <stdio.h>

int main(){
    int pares[2], gemeos[12], primo;
    int t = 1, n = 2, cont = 1;

    printf("\n==========  Numeros primos gemeos   ==========\n\n");

    while (cont < 6)
    {
        while (pares[0] < n)
        {
            n++;
            for (int i = 2; i < n; i++)
            {
                if (i % t == 0)
                {
                    primo = 1;
                    break;
                }
            }
            if (primo)//Indentificador de primo
            {
                pares[0] = n;
            }
            primo = 0;
        }

        while (pares[1] < n)
        {
            n++;
            for (int i = 2; i < n; i++)
            {
                if (i % t == 0)
                {
                    primo = 1;
                    break;
                }
            }
            if (primo)//Indentificador de primo
            {
                pares[1] = n;
            }
            primo = 0;
        }

        if (pares[1] - pares[0] == 2)//Indentificador de gemeos
        {
            gemeos[cont] = pares[0];
            gemeos[cont+1] = pares[1];
            cont++;
        }

        pares[0] = 0;
        pares[1] = 0;
    }
    

    printf("Os primeiros 6 pares de numeros primos gemeos sao: ");

    for (int y = 0; y < 12; y++)
    {
        printf("%d ", gemeos[y]);
    }

    return 0;
}