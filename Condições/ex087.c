#include <stdio.h>

int main(){
    char estado_civil;

    printf("\n---------- Verificador de estado civil ----------\n");
    printf("Para torna o processo mais intuitivo e rapido, pedimos que informe apenas a letra inicial de seu estado civil.\n\n");

    printf("Seu estado civil atual: ");
    scanf("%c", &estado_civil);

    if (estado_civil == 's' || estado_civil == 'S')
    {
        printf("\nSeu estado civil e solteiro.\n");
    }
    else if (estado_civil == 'c' || estado_civil == 'C')
    {
        printf("\nSeu estado civil e casado.\n");
    }
    else if (estado_civil == 'v' || estado_civil == 'V')
    {
        printf("\nSeu estado civil e viuvo.\n");
    }
    else if (estado_civil == 'd' || estado_civil == 'D')
    {
        printf("\nSeu estado civil e divorciado.\n");
    }
    else
    {
        printf("\nDigite um caractere valido.\n");
    }
    

    return 0;
}