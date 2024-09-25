/*127. Escreva um programa que leia várias palavras e, para cada palavra lida, determine o 
seu número de letras. O processamento deverá ser encerrado quando forem lidas duas 
palavras de cinco letras. */
#include <stdio.h>
#include <string.h>

int main(){

    char palavra[20];

    printf("\n                            Tamanho das palavras\n");

    for (int i = 0; i < 2;)
    {
        printf("\nDigite uma palavra: ");
        scanf("%s", &palavra);
        printf("\nA palavra lida tem no total %d letras.", strlen(palavra));

        if (strlen(palavra) == 5)
        {
            i++;
        }
    }

    return 0;
}