#include <stdio.h>
#include <string.h>

int main(){
    char num[5];

    printf("Digite um numero de 1 a 9999: ");
    fgets(num, sizeof(num), stdin);
    printf("\n");

    size_t len = strlen(num);
    if (len > 0 && num[len - 1] == '\n') {
        num[len - 1] = '\0';
    }

    char num_total[5] = "0000";

    strncpy(num_total + 4 - strlen(num), num, strlen(num));

    printf("+----------+----------+---------+---------+\n");
    printf("| Milhares | Centenas | Dezenas | Unidades|\n");
    printf("+----------+----------+---------+---------+\n");
    printf("|    %c     |    %c     |    %c    |    %c    |\n", num_total[0], num_total[1], num_total[2], num_total[3]);
    printf("+----------+----------+---------+---------+\n");

    return 0;
}