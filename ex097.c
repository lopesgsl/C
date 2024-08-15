/*97. Escreva um programa que leia as horas, os minutos e o fuso horário e converta o 
horário lido para o fuso horário informado. O fuso horário deve ser informado como 
um número inteiro. Caso o valor seja positivo, o programa deve considerar que o fuso 
horário digitado é maior do que o atual. Caso o valor seja negativo, o programa deve 
considerar que o fuso horário é menor do que o atual. Caso o valor seja 0, o programa 
deve considerar que o fuso horário é o mesmo do atual. A resposta do programa deve 
ser dada no formato hh:mm hs. Por exemplo, se o horário lido foi 10 h e 30 min e o 
fuso horário for 4, a resposta do programa deve ser 14:30 hs. Por outro lado, se o 
horário lido foi 10 h e30 min e o fuso horário for -4, a resposta do programa deve ser 
06:30 hs. Se o horário lido for 22 h e 30 min e o fuso-horário for 3, a resposta deve ser 
01:30 hs. Se o horário lido for 2 h e 30 min e o fuso horário for -3, a resposta deve ser 
23:30 hs. O horário referente à meia-noite deve ser representado da forma 00:00 hs.*/
#include <stdio.h>

int main(){
    int hr, min, fh;

    //Explicação do programa
    printf("\n[[[[ Conversor de Fuso horarios ]]]]\n");
    printf("Preciso que me informe para qual fuso deseja converter (EX: -4), e um horario no formato 24hrs (00:00).\n\n");

    //Entrada de Dados
    do
    {
        printf("Digite as horas (0 - 23) : ");
        scanf("%i", &hr);
    } while (hr < 0 || hr > 23);
    do
    {
        printf("Digite os minutos (0 - 59): %02i: ", hr);
        scanf("%i", &min);
    } while (min < 0 || hr > 59);
    do
    {
        printf("Digite o quanto muda o fuso (-24 - 24): ");
        scanf("%i", &fh);
    } while (fh < -24 ||  fh > 24);

    //Saida de Dados
    if (fh > 0)
    {
        hr += fh;
        if (hr <= 24)
        {
            hr -= 24;
        }
        printf("\nO horario corrigido: %02i:%02i %ifuso.", hr, min, fh);
    }
    else if (fh < 0)
    {
        hr += fh;
        if (hr < 0)
        {
            hr = 24+hr;
            printf("\nO horario corrigido: %02i:%02i %ifuso.", hr, min, fh);
        }
    }
    else
    {
        printf("\nO horario esta no fuso atual: %02i:%02i %ifuso.", hr, min, fh);
    }
    
    return 0;
}