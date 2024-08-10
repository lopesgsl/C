#include <stdio.h>

int main(){
    char var1;
    char var2;
    char var3;

    printf("Digite uma palavra: ");
    scanf("%c %c", &var1, &var2);

    printf("var1: %c\n", var1);
    printf("var2: %c\n", var2);

    var3 = var2;

    printf("var1: %c\n", var1);
    printf("var2: %c\n", var2);

    return 0;
}