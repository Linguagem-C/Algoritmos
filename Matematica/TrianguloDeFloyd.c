#include <stdio.h>

int main() {
	int linhas;
	int i, j, c = 0;

	printf("Insira o número de linhas do Triangulo de Floyd: ");
	scanf("%d", &linhas);

	for(i=1; i<=linhas; i++) {
		for(j=1; j<=i; j++) {
			c++;
			printf("%d ", c);
		}
		printf("\n");
	}

	return 0;
}