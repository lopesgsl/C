#include <stdio.h>

int main(){
    float sal_hr;
    int hr;

    printf("\n=====Banco de horas======\n");
    printf("Para receber o salario informe os seguintes dados.\n");
    printf("Horas tralhadas: ");
    scanf("%i", &hr);


    if(hr >= 160){
        printf("Salario por hora combinado: ");
        scanf("%f", &sal_hr);

        float sal = 160*sal_hr;
        float extra = (hr-160)*(sal_hr+(sal_hr/2));

        printf("Voce recebera no total R$%.2f", sal+extra);
    }
    else{
        printf("\nVoce nao completou as 160 horas mensais necessarias para o recebimento do pagamento.");
    }



    return 0;
}