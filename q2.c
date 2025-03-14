#include <stdio.h>
#include <stdlib.h>

float **matriz(int colunas, int linhas)
{
	float **vetor = malloc(linhas * sizeof(float*));

	if (vetor == NULL)
	{
		printf("Erro na alocacao\n");
		free(vetor);
		return NULL;
	}

	for (int i = 0; i < linhas; ++i)
	{
		vetor[i] = malloc(colunas * sizeof(float));

		if (vetor[i] == NULL)
		{
			printf("Erro na alocacao\n");
			for (int j = 0; j < linhas; ++j)
			{
				free(vetor[j]);
			}
			return NULL;
		}
	}
	return vetor;
}

int main(int argc, char const *argv[])
{
	int linhas, colunas;

	printf("Digite o numero de linhas da matriz:\n");
	scanf("%d", &linhas);

	printf("Digite o numero de colunas da matriz:\n");
	scanf("%d", &colunas);

	float **ponteiro = matriz(linhas, colunas);

	printf("Vetor alocado com sucesso internacional (musica do KASINO comeca a tocar como no programa do Gilberto Barros)\n");

	for (int i = 0; i < linhas; ++i)
	{
		free(ponteiro[i]);
	}
	free(ponteiro);

	system("pause");
	return 0;
}