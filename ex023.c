#include <stdio.h>
#define PI 3.14159265358979323846

int main(){
	float r,v;
	
	printf("++++Calculadora de Esferas+++\n");
	printf("Para calcular o volume de uma circuferencia\n");
	printf("primeiro e necessario que me informe o valor do raio\n\n");
	printf("Raio: ");
	scanf("%f", &r);
	
	v = 4.0/3.0*PI*r*r*r;
	
	printf("\nO volume de uma esfera com o raio de %f e %f", r, v);
	return 0;
}