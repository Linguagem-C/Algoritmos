#include <stdio.h>
#include <math.h>

void calcular(int *vetor, int tam, float *media, float *desvio) {

	int i;

	*media = 0.0;
	*desvio = 0.0;

	for(i=0; i<tam; i++) {
		*media += vetor[i];
	}
	*media = *media/tam;

	for(i=0; i<tam; i++) {
		*desvio += pow(vetor[i] - *media, 2);
	}
	*desvio = sqrt(*desvio/(tam-1));


}

int main() {

	int v[5] = {1, 2, 3, 4, 5};
	float media, desvio_padrao;

	calcular(v, 5, &media, &desvio_padrao);

	printf("Media = %f\n", media);
	printf("Desvio Pardão = %f\n", desvio_padrao);

	return 0;
}