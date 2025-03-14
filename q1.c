#include <stdio.h>
#include <stdlib.h>

int* aloque(int TAM)
{
	int *vetor = malloc(TAM * sizeof(int));

	if (vetor == NULL)
	{
		printf("Erro\n");
		return 0;
	}
	else
	{
		return vetor;
	}
}

int main(int argc, char const *argv[])
{
	int TAM;

	printf("Qual o tamanho do vetor:\n");
	scanf("%d", &TAM);

	int *ponteiro = aloque(TAM);

	printf("Vetor alocado\n");

	free(ponteiro);

	system("pause");
	return 0;
}