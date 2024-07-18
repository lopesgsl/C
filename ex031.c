#include <stdio.h>

int main(){
    int a, e, b, p;
    printf("------Sistema de notas do colegio novo horizonte------\n");
    printf("O sistema de pontos do colegio funciona diferente dos demais pois segue a seguinte tabela\n\n");

    printf("ACERTOS = 5\n");
    printf("ERROS = -3\n");
    printf("BRANCO = 0\n");

    printf("\n---------------------------------------------------------\n");
    printf("Por favor responda a quantidade correta para concluir os pontos\n");
    printf("ACERTOS: ");
    scanf("%i", &a);
    printf("ERROS: ");
    scanf("%i", &e);
    printf("BRANCO: ");
    scanf("%i", &b);

    p = (a*5)+(e*-3);

    printf("\n\nDas %i questoes a somatoria dos pontos foi de %i", a+e+b, p);

    return 0;
}