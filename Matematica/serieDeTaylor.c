/* Faça uma função que receba como parâmetro o valor de um angulo em graus, e calcule o valor do cosseno desse angulo,
usando a respectiva serie de taylor:
	cos x = S(n=0->n=5) ((-1)^n/(2n)!)*x^(2n) = x - x^2/2! + x^4/4! - ...
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial(int n) {
  if(n == 0)
    return 1;
  else
    return n*fatorial(n-1);
}

/* Quanto maior o valor de n no for maior a precisão, no caso é 5 */
float cosseno(float x) {
	int n;
	float coss = 0.0;

	for(n=0; n<=5; n++) {
		coss = coss + pow(-1, n)*pow(x, 2*n)/fatorial(2*n);
	}

	return coss;
}

int main() {

	float ang = 45; /*graus*/
	ang = 3.141593 * ang/180.0; /*radianos*/
	printf("cosseno de %f radianos = %f radianos\n", ang, cosseno(ang));
	printf("cos de %f radianos = %f radianos\n", ang, cos(ang));

	return 0;
}