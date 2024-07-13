#include <stdio.h>
#include <math.h>

int main(){
	float sen, con;
	
	printf("Vou descobrir o valor de um cosseno apenas com o seno\n");
	printf("Qual o valor do seno(Ex: 0.707107): ");
	scanf("%f", &sen);
	
	con = sqrt(1-sen*sen);
	printf("O valor do cosseno e: %f", con);
	return 0;
}