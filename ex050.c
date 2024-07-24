#include <stdio.h>

int main(){
    int hr, min, senha, espera, tempo_total;

    printf("\n#####Consultorio medico#####\n");
    printf("Informe sua senha para o horario da consulta.\n\n");

    printf("Senha: ");
    scanf("%i", &senha);
    printf("Hora de emissao da senha (24hrs): ");
    scanf("%i", &hr);
    printf("Minuto de emissao da senha: ");
    scanf("%i", &min);

    espera = (senha - 1) * 25;
    tempo_total = hr * 60 + min + espera;
    hr = tempo_total / 60;
    min = tempo_total % 60;

    hr = hr%24;

    printf("\nComo voce esta com a senha %i, devera se atendido pelas %02i:%02i.", senha, hr, min);

    return 0;
}