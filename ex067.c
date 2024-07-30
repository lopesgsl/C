#include <stdio.h>

int main(){
    int ano;

    printf("\n~~~~~~~~ BISSEXTO ~~~~~~~~\n");
    printf("Venha descobrir comigo se o numero e bissexto para isso ele precisa se divisivel por 400, mas apenas me diga o ano que deseja saber.\n\n");

    printf("Ano: ");
    scanf("%i", &ano);

    if ( ano%400 == 0)
    {
        printf("\nO ano %i e sim bissexto.\n", ano);
    }
    else if (ano%4 == 0 && ano%100 !=0)
    {
        printf("\nO ano %i e sim bissexto.\n", ano);
    }
    
    else
    {
        printf("\nO ano %i nao e bissexto.\n", ano);
    }
    
    return 0;
}