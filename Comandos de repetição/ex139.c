/*139. Escreva um programa que leia um número inteiro N e um número inteiro K e 
identifique o k-ésimo algarismo (da direita para a esquerda) do número N. Caso o 
valor de k seja maior do que a quantidade de algarismos de N, a resposta do 
programa deve ser 0*/
#include <stdio.h>

int main(){
    int n, k, termo;
    int alg = 0;
    
    printf("\n          o k-esimo algarismo\n\n");

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Qual k-esimo termo deseja descobrir?: ");
    scanf("%d", &k);

    for (int i = 1; i <= n; i*=10)
    {
        if (n/i >= 1)
        {
            alg++;
            if (k == alg)
            {
                termo = (n/i)%10;
            }
        }
    }

    if (k > alg)
    {
        printf("O k-esimo algorismo: 0");
        return 0;
    }
    else{
        printf("O k-esimo algorismo: %d", termo);
    }

    return 0;
}