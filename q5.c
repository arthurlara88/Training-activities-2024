#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int TAM;
	float *matriz, soma = 0;

	printf("Digite o tamanho de vossa matriz:\n");
	scanf("%d", &TAM);

	matriz = malloc(TAM * sizeof(float));

	if (matriz == NULL)
	{
		printf("Erro na alocacao\n");
		return 1;
	}

	printf("Digite os valores da matriz:\n");
	for (int i = 0; i < TAM; ++i)
	{
		scanf("%f", &matriz[i]);
		soma += matriz[i];
	}

	printf("A soma dos elementos da matriz e de: %f\n", soma);

	free(matriz);

	getchar();
	getchar();
	return 0;
}