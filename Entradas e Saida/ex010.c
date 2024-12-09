#include <stdio.h>
#include <amp_math.h>

int main(void){
	float cat1, cat2, hipo;
	
	printf("Voce conhece o Teorema de Pitagoras? Digite um cateto: ");
	scanf("%f", &cat1);
	printf("Agora digite outro cateto para eu lhe entregar uma hipotenusa: ");
	scanf("%f", &cat2);

	hipo = sqrt((cat1*cat1)+(cat2*cat2));
	
	printf("A hipotenusa e: %f", hipo);
	return 0;
}