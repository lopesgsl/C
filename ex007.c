#include <stdio.h>

int main(){
	int base, altura; 
	float area;
	
	printf("Digite a base de um triangulo: ");
	scanf("%i", &base);
	printf("Digite a altura desse mesmo triangulo: ");
	scanf("%i", &altura);
	
	area = base*altura/2;
	
	printf("Sua area e: %.2f", area);
	return 0;
}