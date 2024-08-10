/* 92. Escreva um programa que leia um verbo regular no infinitivo (da 1ª, 2ª ou 3ª 
conjugação) e imprima a sua conjugação no presente, pretérito perfeito e futuro do 
presente do modo indicativo. */
#include <stdio.h>
#include <string.h>

int main(){
    char verbo[99];

    printf("\n////// Verbo regular no infinitivo \\\\\\\\\\\\\\\n");
    printf("\nMe informe um verbo regular no infinitivo e irei informa sua conjucao no presente, preterito perfeito e o futuro do presente.");
    printf("\nTodas no mundo indicativo organizados em uma lista.\n\n");


    printf("Escreva o verbo: ");
    scanf("%s", &verbo);

    int num = strlen(verbo);

    char verbo_mod[99];
    strcpy(verbo_mod, verbo);
    verbo_mod[num - 2] = '\0';

    if (verbo[num-1] == 'r' && verbo[num-2] == 'a')
    {
        printf("\n\n            PRESENTE\n\nEu %so\nTu %sas\nEle,ela %sa\nNos %samos\nVos %sais\nEles %sam", verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod);
        printf("\n\n            PRETERITO PERFEITO\n\nEu %sei\nTu %saste\nEle,ela %sou\nNos %samos\nVos %sastes\nEles %saram", verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod);
        printf("\n\n            FUTURO DO PRESENTE\n\nEu %sarei\nTu %saras\nEle,ela %sara\nNos %saremos\nVos %seis\nEles %sarao", verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod);
    }
    else if (verbo[num-1] == 'r' && verbo[num-2] == 'e')
    {
        printf("\n\n            PRESENTE\n\nEu %so\nTu %ses\nEle,ela %se\nNos %semos\nVos %seis\nEles %sem", verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod);
        printf("\n\n            PRETERITO PERFEITO\n\nEu %si\nTu %seste\nEle,ela %seu\nNos %semos\nVos %sestes\nEles %seram", verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod);
        printf("\n\n            FUTURO DO PRESENTE\n\nEu %serei\nTu %seras\nEle,ela %sera\nNos %saremos\nVos %sereis\nEles %serao", verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod);
    }
    else if (verbo[num-1] == 'r' && verbo[num-2] == 'i')
    {
        printf("\n\n            PRESENTE\n\nEu %so\nTu %ses\nEle,ela %se\nNos %simos\nVos %sis\nEles %sem", verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod);
        printf("\n\n            PRETERITO PERFEITO\n\nEu %si\nTu %siste\nEle,ela %siu\nNos %simos\nVos %sistes\nEles %siram", verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod);
        printf("\n\n            FUTURO DO PRESENTE\n\nEu %sirei\nTu %siras\nEle,ela %sira\nNos %siremos\nVos %sireis\nEles %sirao", verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod, verbo_mod);
    }
    else
    {
        printf("\nPreciso que informe um verbo regular no infinitivo.");
    }
    

    return 0;
}