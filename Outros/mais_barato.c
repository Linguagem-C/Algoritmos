#include <stdio.h>
#include <stdlib.h>

int mais_barato(const int precos[], const char *carros[]) {
	int atual;
	int maisBarato = 0;

	for(atual=0; atual < 5; atual++){
		if(precos[atual] < precos[maisBarato]){
			maisBarato = atual;
		}
	}
	return maisBarato;
}

int mais_caro(const int precos[], const char *carros[]) {
	int atual;
	int maisCaro = 0;

	for(atual=0; atual < 5; atual++){
		if(precos[atual] > precos[maisCaro]){
			maisCaro = atual;
		}
	}
	return maisCaro;
}

int main() {
	const int precos[5] = {1000000, 46000, 16000, 46000, 17000};
	const char *carros[5] = {"Lamborghini", "jipe", "Brasília", "Smart", "Fusca"};

	int maisBarato = mais_barato(precos, carros);
	int maisCaro = mais_caro(precos, carros);


	printf("O carro mais barato é: %s com preço de %d\n", carros[maisBarato], precos[maisBarato]);
	printf("O carro mais caro é: %s com preço de %d\n", carros[maisCaro], precos[maisCaro]);

	return 0;
}