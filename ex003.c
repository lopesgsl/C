#include <stdio.h>

int main(void) {
  int n1;
  int peri;
  int area;  
  
  printf("Calculadora do quadrado\nDigite um dos lados do quadrado: ");  
  scanf("%d", &n1);
  
  peri = n1*4;  
  area = n1*n1;
  
  printf("Perimetro: %d\n", peri);
  printf("Area: %d\n", area);
  
  return 0;
}