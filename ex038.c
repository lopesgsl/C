#include <stdio.h>

int main(){
    float hr, min;
    int sec;

    printf("\nConversor de segundos para formato de relogio.\n\n");
    printf("Segundos: ");
    scanf("%i", &sec);

    hr =  sec/3600;
    min = (sec%3600)/60;
    sec = sec%60;

    printf("\n %.0f Horas %.0f minutos %i segundos.", hr, min, sec);
    return 0;
}