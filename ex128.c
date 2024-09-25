/*128. Escreva um programa que leia o nome e o peso de 20 bois que participam de uma 
exposição e imprima o nome do boi mais leve e o nome do boi mais pesado. Para isso, 
suponha que todos os bois têm pesos distintos.*/
#include <stdio.h>
#include <string.h>

int main(){
    int peso[20], ps_menor, ps_maior;
    char nome[99], nm_menor[99], nm_maior[99];

    printf("\n                Cartalogo de bois\n\n");



    for (int i = 0; i < 20; i++)
    {
        printf("Nome do boi: ");
        scanf("%s", nome);
        printf("Peso do boi(Kg): ");
        scanf("%d", &peso[i]);

        if (ps_menor > peso[i])
        {
            ps_menor = peso[i];
            strcpy(nm_menor, nome);
        }
        if (peso[i] > ps_maior)
        {
            ps_maior = peso[i];
            strcpy(nm_maior, nome);
        }
    }
    
    printf("\n%s e o boi de menor peso com %d Kg.",nm_menor, ps_menor);
    printf("\n%s e o boi de maior peso com %d Kg.",nm_maior, ps_maior);

    return 0;
}