#include <stdio.h>

int main(){
    int idade;

    printf("\n::::::: Faixa etaria de uma pessoa :::::::\n");
    printf("Se deseja saber como se classifica a faixa etaria de determinada pessoa apenas digite a idade dela.\n\n");

    printf("Idade: ");
    scanf("%i", &idade);

    if ( idade >= 60)
    {
        printf("\nEssa pessoa e um idoso.\n");
    }
    else if (18 <= idade && idade <= 59)
    {
        printf("\nEssa pessoa e um adulto.\n");
    }
    else if (13 <= idade && idade <= 17)
    {
        printf("\nEssa pessoa e um adolescente.\n");
    }
    else
    {
        printf("\nEssa pessoa e uma crianca.\n");
    }
    

    return 0;
}