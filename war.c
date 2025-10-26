#include <stdio.h>
#define QTD_TERRITORIOS 5
#define TAM_STRING 100

typedef struct
{
    char nome[TAM_STRING];
    char cor[TAM_STRING];
    int tropas;
} Territorio;

int main()
{
    Territorio territorios[QTD_TERRITORIOS];

    for (int i = 0; i < QTD_TERRITORIOS; i++)
    {
        printf("\n=== Cadastro do Território %d ===\n", i + 1);

        // Lê o nome do território até o Enter
        printf("Digite o nome do território: ");
        scanf(" %[^\n]", territorios[i].nome);

        // Lê a cor do exército até o Enter
        printf("Digite a cor do exército: ");
        scanf(" %[^\n]", territorios[i].cor);

        // Lê a quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados
    printf("\n\n=== Dados dos Territórios Cadastrados ===\n");
    for (int i = 0; i < QTD_TERRITORIOS; i++)
    {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].cor);
        printf("Quantidade de Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}
