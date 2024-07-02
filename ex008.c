#include <stdio.h>

int main(){
	float celcius, kelvin, fari;
	
	printf("Digite uma temperatura em celcius: ");
	scanf("%f", &celcius);
	
	kelvin = celcius+273.15;
	fari = celcius*1.8+32;
	
	printf(
	"Agora vamos converter para as outras medidas\nkelvin: %.2f\nFahrenheit: %.2f", kelvin, fari
	);
	
	return 0;
}