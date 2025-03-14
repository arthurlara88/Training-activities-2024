#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int main() 
{
    int lojas = 0, *produtos, indice;
    char confia;
    int menor = produtos[0];

    produtos = malloc(TAM * sizeof(int));

    if (produtos == NULL) 
    {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    printf("Digite a quantidade de produtos das lojas desejadas:\n");

    for (int i = 0; i < TAM; ++i) 
    {
        printf("Loja: %d\n", i + 1);

        printf("Quantidade de produtos:\n");
        scanf("%d", &produtos[i]);
        lojas++;

        if (produtos[i] < menor) 
        {
            menor = produtos[i];
            indice = i + 1;
        }

        getchar();

        printf("Deseja colocar mais uma loja? ('s' ou 'n')\n");
        scanf("%c", &confia);

        if (confia == 'n') 
        {
            break;
        } 
        else if (confia != 's') 
        {
            printf("Caractere errado\n");
            free(produtos);
            return 0;
        }
    }

    printf("Lojas e produtos:\n");
    for (int i = 0; i < lojas; ++i) 
    {
        printf("%d - %d\n", i + 1, produtos[i]);
    }

    printf("A loja %d tem a menor quantidade de produtos: %d\n", indice, menor);

    free(produtos);

    getchar();
    getchar();
    return 0;
}
