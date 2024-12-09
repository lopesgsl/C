#include <stdio.h>

int main(){
    int hr, min, tempo, sousa_hr, sousa_min, patos_hr, patos_min, campina_hr, campina_min, joao_hr, joao_min;

    printf("\n{{{{{{{ Planejamento de horarios }}}}}}}\n");
    printf("Para melhor mgestão informe seu horario de saida para definir o horario de chegada.\n\n");

    printf("\nQue hora ele saiu? (Horas e minutos): ");
    scanf("%i%i", &hr, &min);

    tempo = hr*60 + min;
    sousa_hr = ((tempo+50+20)/60)%24;
    sousa_min = (tempo+50+20)%60;

    patos_hr = ((tempo+50+40+120)/60)%24;
    patos_min = (tempo+50+40+120)%60;

    campina_hr = ((tempo+50+60+120+150)/60)%24;
    campina_min = (tempo+50+60+120+150)%60;

    joao_hr = ((tempo+50+80+120+150+120)/60)%24;
    joao_min = (tempo+50+80+120+150+120)%60;



    printf("Sousa = As %02i horas e %02i minutos.\n", sousa_hr, sousa_min);
    printf("Patos = As %02i horas e %02i minutos.\n", patos_hr, patos_min);
    printf("Campina Grande = As %02i horas e %02i minutos.\n", campina_hr, campina_min);
    printf("João Pessoa = As %02i horas e %02i minutos.\n", joao_hr, joao_min);
    
    return 0;
}