#include <stdio.h>

int main(){
    int peso[20], altura[20], imc[20];

    printf("\n                Porcentagem de IMC\n");
    printf("informe o peso de a altura de casa pessoa respectivamente.\n\n");    

    for (int i = 0; i <= 19; i++)
    {
        printf("PESO da %i pessoa: ", i+1);
        scanf("%i", peso[i]);
        printf("ALTURA da %i pessoa: ", i+1);
        scanf("%i", peso[i]);
    }
    

    for (int t = 0; t <= 19; t++)
    {
        imc[t] = peso[t]/altura[t]*altura[t];

        if (imc[t] < 18,5)
        {
            printf("");
        }
        
    }
    
    // De 18,5 a 24,9



    return 0;
}