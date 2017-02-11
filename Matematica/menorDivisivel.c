/* Faça um  programa que calcule o menor número divisivel por cada um dos números de 1 a n */

#include <stdio.h>

int main() {
	int n, numero;
	int i, achou = 0;

	printf("Insira o valor de n: ");
	scanf("%d", &n);

	numero = n;

	while(achou == 0){
		achou = 1;
		/* Como todo número é divisivel por 1 começamos do 2 */
		for(i=2; i<=n; i++) {
			if(numero % i != 0) {
				achou = 0;
				break;
			}
		}

		if(achou == 1)
			printf("O menor número divisivel por 1 até %d = %d\n", n, numero);
		else
			numero = numero + 2;
	}

	return 0;
}