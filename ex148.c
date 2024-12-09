/*148. Escreva um programa que permita que o usuário jogue o jogo do “arrochado”. Neste 
jogo, o programa gera um número aleatório entre 1 e 100 e o usuário deve 
“arrochar” o número gerado pelo computador. A cada jogada, os limites do jogo vão 
se estreitando de acordo com os valores digitados pelo usuário. O jogo acaba quando 
o usuário consegue imprensar o número gerado pelo computador (neste caso ele 
ganha) ou quando o usuário entra com o número gerado pelo computador (neste 
caso ele perde). Em pascal, use a função random ou randomize para a geração de 
números aleatórios. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int rando, menor = 1, maior = 100, user;

    printf("\nVAMOS JOGA O JOGO DO 'ARROCHADO'?? TENTER N ADIVINHA O NUMERO.\n\n");

    srand(time(NULL));

    rando = (rand()%100)+1;

    do
    {
        printf("Digite um numero entre %d - %d: ", menor, maior);
        scanf("%d", &user);
        
        if (user < rando)
        {
            menor = user;
        }
        else if (user > rando)
        {
            maior = user;
        }
        
    } while (user != rando && maior - menor > 2);
    
    if (user == rando)
    {
        printf("Voce ganhou.");
    }
    else{
        printf("Voce perdeu.");
    }
    
}