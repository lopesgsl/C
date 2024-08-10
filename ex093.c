/*93. Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique se 
o número lido é ou não um palíndromo.*/
#include <stdio.h>
#include <string.h>

int main(){
    char num[5];
    char num_inver[5];

    printf("\n[[[[[[[ Palindromo ]]]]]]]\n");

    printf("Digite um numero entre 1000 a 9999: ");
    scanf("%s", &num);
    
    int j = 4;

    /*for (int i = 0; i < 5; i++)
    {
        num_inver[i] = num[j];
        j--;
    }*/
    
    num_inver[0] = num[4];

    printf("%s eee %s", num, num_inver);

    if (strcoll(num,num_inver) == 0)
    {
        printf("\nE um palindromo.");
    }
    else{
        printf("\nNao e um palindromo.");
    }
    

    return 0;
}