#include <stdio.h>

int main() {

  int numero, i;
  int tabuada;

  printf("Qual tabuada você quer? ");
  scanf("%d", &numero);
      
  for(i = 0; i <= 10; i++) {
      tabuada = numero*i;
      printf("%d x %d = %d\n", numero, i, tabuada);
  }

  return 0;
}

