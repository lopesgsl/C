/*108. Escreva um programa que leia 20 números entre 10000 e 99999 referente aos
números dos deputados estaduais eleitos e identifique a quantidade de candidatos 
que cada partido elegeu. O número do partido do deputado pode ser identificado 
pelos dois primeiros algarismos do número do candidato. Por exemplo, um candidato 
com número 13457 concorre pelo PT, que é o partido de número 13, enquanto que um 
candidato com número 45879 concorre pelo PSDB, que é o partido de número 45. 
Neste programa, considere os seguintes números de partido: 13 (PT), 14 (PTB), 15 
(PMDB), 25 (DEM), 45 (PSDB) e 65( PCdoB).*/
#include <stdio.h>

int main(){
    int num;
    int pt=0, ptb=0, pmdb=0, dem=0, psdb=0, pcdob=0, nan=0;

    printf("\n{{{{ Indentificador de partido v2.0 }}}}\n\n");
    
    for (int i = 0; i <= 20; i++)
    {
        do
        {
            printf("Digite o numero do deputado: ");
            scanf("%i", &num);
        } while (num < 10000 || num > 99999);

        num /= 1000;

        switch (num)
        {
        case 13:
            pt++;
            break;
        case 14:
            ptb++;
            break;
        case 15:
            pmdb+=1;
            break;
        case 25:
            dem++;
            break;
        case 45:
            psdb++;
            break;
        case 65:
            pcdob++;
            break;
        default:
            nan++;
            break;
        }
        num = 0;
    }
    
    printf("\n\nIndentificamos dos 20 deputados os seguintes partidos:\n");
    printf("PT    = %02i\n", pt);
    printf("PTB   = %02i\n", ptb);
    printf("PMDB  = %02i\n", pmdb);
    printf("DEM   = %02i\n", dem);
    printf("PSDB  = %02i\n", psdb);
    printf("PCdoB = %02i\n", pcdob);

    printf("\nPartido nao cadastrados = %02i", nan);

    return 0;
}