#include <stdio.h>

int main(){
	float base, altura; 
	float area;
	
	printf("Digite a base de um triangulo: ");
	scanf("%f", &base);
	printf("Digite a altura desse mesmo triangulo: ");
	scanf("%f", &altura);
	
	area = base*altura/2;
	
	printf("Sua area e: %.2f", area);
	return 0;
}