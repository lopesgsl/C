#include <stdio.h>
#include <conio.h>

void main (){
    int seg, minutos, horas, resto;

    printf("____________________________________\n");

    printf("digite os segundos");
    scanf("%d", &seg);

    if(seg > 60){
        minutos = seg / 60;
        resto = seg % 60;
        seg = resto;
    }
    if(minutos > 60){
            horas = minutos / 60;
            resto = minutos % 60;
            minutos = resto;
        }
        printf("%d horas, %d minutos %d segundos", horas, minutos, seg);
}