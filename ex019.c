#include <stdio.h>

int main(){
	float ang1, ang2, ang3;
	
	printf("Descubra o valor de um terceiro angulo interno de uma triangulo\n");
	
	printf("Primeiro digite o primeiro angulo: ");
	scanf("%f", &ang1);
	printf("Segundo digite o segundo angulo: ");
	scanf("%f", &ang2);
	
	ang3 = 180-(ang1+ang2);
	
	printf("Terceiro analise o resultado: %f", ang3);
	return 0;
}