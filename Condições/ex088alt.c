#include <stdio.h>

int main() {
    int numeroCandidato, partido;

    printf("Digite o número do candidato (entre 10000 e 99999): ");
    scanf("%d", &numeroCandidato);

    if (numeroCandidato < 10000 || numeroCandidato > 99999) {
        printf("Número de candidato inválido.\n");
        return 1;
    }

    partido = numeroCandidato / 10000;

    switch (partido) {
        case 13:
            printf("O candidato concorre pelo PT.\n");
            break;
        case 14:
            printf("O candidato concorre pelo PTB.\n");
            break;
        case 15:
            printf("O candidato concorre pelo PMDB.\n");
            break;
        case 25:
            printf("O candidato concorre pelo DEM.\n");
            break;
        case 45:
            printf("O candidato concorre pelo PSDB.\n");
            break;
        case 65:
            printf("O candidato concorre pelo PCdoB.\n");
            break;
        default:
            printf("Partido não encontrado.\n");
    }

    return 0;
}