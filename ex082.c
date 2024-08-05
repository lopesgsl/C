#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    
    printf("\n********** Situacao do aluno **********\n");


    printf("Digite a Primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a Segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a Terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    if (media >= 7)
    {
        printf("\nO aluno foi aprovado por media.");
    }
    else if (media < 4)
    {
        printf("\nO aluno foi reprovado pela sua nota da media, isso significa que nao podera fazer a prova final.\n");
    }
    else
    {
        printf("\nO aluno nao foi aprovado por media, contudo ainda e possivel fazer a prova final.");
        float provafinal = (25 - (3*media))/2;
        printf("\nO aluno precisa tira uma nota de %.2f na prova final para ser aprovado.", provafinal);
    }

    return 0;
}