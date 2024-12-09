#include <stdio.h>

int main(){
    float q, a, e, r;

    printf("\n-----<Sistema de notas>-----\n");

    printf("A nota e definida pela porcentagem de erros e acertos, logo ensira o que esta pedindo\n");

    printf("\nNumeros de questoes: ");
    scanf("%f", &q);
    printf("ERRROS: ");
    scanf("%f", &e);
    printf("ACERTOS: ");
    scanf("%f", &a);

    if(a+e > q)
    {
        printf("\nVoce colocou o numero de acertos e erros maior que a quantidade de questoes, por favor recomece.");
    }
    if (a+e < q)
    {
        r = q-(a+e);
        a = a/q;
        e = (r+e)/q;
        printf("Voce informou que o numero de acertos e erros foi menor que a quantidade de questoes, logo o numero que faltou sera adicionado as questoes erradas\n");
        printf("\nDas %.0f questoes o aluno acertou %.0f%% e errou %.0f%%.", q, a*100, e*100);
    }
    if (a+e <= q)
    {
        a = a/q;
        e = e/q;
        printf("\nDas %.0f questoes o aluno acertou %.0f%% e errou %.0f%%.", q, a*100, e*100);
    }
    
    return 0;
}