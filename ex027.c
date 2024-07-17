#include <stdio.h>

int main(){
	float comp, larg, litros, m;
	
	printf("\n+++Boia de agua virtual+++\n");

	printf("Vou lhe dizer ate quantos metros a agua deve chegar para uma quantidade de agua que voce deve definir\n");
	printf("Mas antes preciso que voce me informe os seguites dados.\n\n");

	printf("Comprimento(Metros) do reservatorio: ");
	scanf("%f", &comp);
	printf("Largura(Metros) do reservatorio: ");
	scanf("%f", &larg);
	printf("Deseja encher com quantos litros de agua?: ");
	scanf("%f", &litros);

	m = (litros/1000)/(comp*larg);

	printf("\nVoce precisa encher o reservatorio ate %f Metros", m);
	
	return 0;
}