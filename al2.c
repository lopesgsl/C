#include <stdio.h>

int main(){
    int n, m = 3, primo = 1;

    printf("\n              Numeros primos.\n\n");

    printf("Quantos numeros primos?: ");
    scanf("%d", &n);


    if (n == 1)
    {
        printf("\nO primeiro numero primo e 2.\n");
    }
    else
    {
        int primos[n];
        for (int i = 0; i < n-1;)
        {
            primo = 1;
            for (int i = 2; i < m; i++)
            {
                if (m%i == 0)
                {
                    primo = 0;
                    break;
                }
            }
            if (primo)
            {
                primos[i] = m;
                i++;
            }
            m++;
        }
        printf("Os primeiros %d numeros primos sao: 2 ", n);
        for (int i = 0; i < n-1; i++)
        {
            printf("%d ", primos[i]);
        }
    }
    
    return 0;
}