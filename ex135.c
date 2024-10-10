/*135. Escreva um programa que simule uma votação. O programa deve computar o voto de 
20 eleitores e depois deve imprimir a quantidade e o percentual de votos recebidos 
por cada candidato, bem como a quantidade e o percentual de votos nulos. As opções 
de voto são:
[1] João Borracheiro
[2] Zé do caminhão
[3] Maria da bodega
[4] Ana */
#include <stdio.h>

void main(){
    int voto;
    float um = 0, dois = 0, tres = 0, quatro = 0, nulo = 0;
    const int eleitores = 20;

    printf("\n===== ELEITORES. =====\n\n");
    printf("[1] João Borracheiro\n[2] Zé do caminhão\n[3] Maria da bodega\n[4] Ana\n\n");
    for (int i = 0; i < eleitores; i++)
    {
        printf("VOTO: ");
        scanf("%d", &voto);
        switch (voto)
        {
        case 1:
            um++;
            break;
        case 2:
            dois++;
            break;
        case 3:
            tres++;
            break;
        case 4:
            quatro++;
            break;
        default:
            nulo++;
            break;
        }
    }
    um = (um/eleitores)*100;
    dois = (dois/eleitores)*100;
    tres = (tres/eleitores)*100;
    quatro = (quatro/eleitores)*100;
    nulo = (nulo/eleitores)*100;
    printf("Agora com os 20 votos computalizados aqui esta os resultados.\n");
    printf("%.2f%% João Borracheiro\n%.2f%% Zé do caminhão\n%.2f%% Maria da bodega\n%.2f%% Ana", um, dois, tres, quatro, nulo);
}