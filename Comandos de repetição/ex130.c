/*130. Escreva um programa que leia o número de pessoas que irão participar de um evento, 
no qual será sorteado um prêmio, e, a seguir, leia o nome e o número do bilhete 
recebido por cada uma destas pessoas. O programa deve informar o nome do 
ganhador do prêmio, que é a pessoa cuja ordem de chegada é igual ao número do seu 
bilhete. Para isto, você poder supor que: a ordem de chegada de cada pessoa 
corresponde à ordem de leitura dos seus dados; sempre existe uma pessoa cujo 
número do bilhete é igual a sua ordem de chegada; este caso acontece para apenas 
uma pessoa.*/
#include <stdio.h>
#include <string.h>

int main(){
    int quant;

    printf("\n~~~~~~~ Sorteio ~~~~~~\n\n");
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &quant);

    int num[quant];
    char nome[100], winner[100];

    for (int i = 1; i <= quant; i++)
    {
        printf("\nNome da pessoa: ");
        scanf("%s", nome);
        printf("Digite o numero do bilhete: ");
        scanf("%d", &num[i]);

        if (num[i] == i)
        {
            strcpy(winner, nome);
        }
        
    }

    printf("\nO vencedor do 'Sorteio' foi %s.", winner);

    return 0;
}