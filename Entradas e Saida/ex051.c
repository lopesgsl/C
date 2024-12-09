#include <stdio.h>

int main(){
    int posi, check, tempo;

    printf("\n-----_____Aeroporto de Campina Grande_____-----\n");
    printf("Ola carlos, para difinimos seu tempo de espera vamos precisa de certas informacoes suas.\n\n");

    printf("Posicao da fila: ");
    scanf("%i", &posi);

    check = (posi-1)%5+1;
    tempo = ((posi - 1)/5)*15;

    printf("Voce devera espera entorno de %i minutos para ser atendido.\nNo guinche%i", tempo, check);

    return 0;
}