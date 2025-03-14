#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int TAM, *vetor, soma = 0, media;

	printf("Digite o tamanho desejado:\n");
	scanf("%d", &TAM);

	vetor = malloc(TAM * sizeof(int));
	if (vetor == NULL)
	{
		printf("Erro na alocacao\n");
		return 0;
	}

	for (int i = 0; i < TAM; ++i)
	{
		printf("Digite o valor n%d do vetor\n", i);
		scanf("%d", &vetor[i]);

		soma += vetor[i];
	}

	media = soma / TAM;

	printf("Media aritmetica do vetor: %d\n", media);

	free(vetor);

	system("pause");
	return 0;
}