/* S = 1/N! */

#include <stdio.h>

int main() {

	int n = 10;
	int i, j;
	float f, Somatorio = 1.0;

	for(i=1; i<=n; i++) {
		fatorial=1;
		for(j=1; j<=i; j++) {
			fatorial = fatorial * j;
		}
		Somatorio = Somatorio + 1.0/fatorial;
	}

	printf("Somatorio = %.f\n", Somatorio);

	return 0;
}