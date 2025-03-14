#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int TAM;
	float *ponteiro;

	printf("Digite o tamanho desejado:\n");
	scanf("%d", &TAM);

	ponteiro = malloc(TAM * sizeof(float));

	if (ponteiro == NULL)
	{
		printf("Erro na alocacao.\n");
		return 1;
	}

	printf("Digite os valores do vetor:\n");
	for (int i = 0; i < TAM; ++i)
	{
		scanf("%f", &ponteiro[i]);
	}

	float maior = ponteiro[0];
	float menor = ponteiro[0];
	int imaior = 1;
	int imenor = 1;

	for (int i = 0; i < TAM; ++i)
	{
		if (ponteiro[i] > maior)
		{
			maior = ponteiro[i];
			imaior = i;
		}

		if (ponteiro[i] < menor)
		{
			menor = ponteiro[i];
			imenor = i;
		}
	}	

	printf("Valores maior e menos com seus respectivos indices:\n");
	printf("Maior: %f, indice: %d\n", maior, imaior);
	printf("Menor: %f, indice: %d\n", menor, imenor);

	free(ponteiro);

	system("pause");
	return 0;

}