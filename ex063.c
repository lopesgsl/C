#include <stdio.h>

int main(){
    int gol_casa, gol_fora;

    printf("\n:::::::::: Copa do mundo ::::::::::\n\n");

    printf("Gols pelo time da casa: ");
    scanf("%i", &gol_casa);
    printf("Gols pelo time visitante: ");
    scanf("%i", &gol_fora);

    if (gol_casa == gol_fora)
    {
        printf("\nO JOGO TERMINOU EM EMPATE!\n");
    }      
    else if (gol_casa > gol_fora)
    {
        printf("\nO TIME DE CASA GANHOU O JOGO!\n");
    }
    else{
        printf("\nO TIME VISITANTE GANHOU O JOGO!\n");
    }
    
    return 0;
}