#include <stdio.h>

int main(){
	float cm;
	
	 printf("Conversor de Polegadas/Centimetros\nDigite um valor em polegada: ");
	 scanf("%f", &cm);
	 
	 cm = cm*2.54;
	 
	 printf("O valor em centimetro: %.2f cm", cm);
	return 0;
}