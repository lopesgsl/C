#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char str[2];
	
	printf("Vou transforma uma letra minuscula em maiusculas\n");
	printf("Primeiro digite uma letra: ");
	scanf("%1s", &str);
	
	char str_upper = toupper(str[0]);
	
	printf("A letra %c em maiuscula fica %c",str[0], str_upper);
	
	return 0;
}            
                                                