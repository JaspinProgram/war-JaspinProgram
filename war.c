#include <stdio.h>
#include <string.h>

// Constantes globais
#define QTD_TERRITORIOS 5
#define TAM_STRING 100 // Tamanho padrão para todas as strings

// Definição da struct Territorio
typedef struct
{
    char nome[TAM_STRING];
    char cor[TAM_STRING];
    int tropas;
} Territorio;

// Função para limpar o buffer de entrada (stdin)
void limparBufferEntrada()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main()
{
    Territorio territorios[QTD_TERRITORIOS];

    // Entrada de dados
    for (int i = 0; i < QTD_TERRITORIOS; i++)
    {
        printf("\n=== Cadastro do Território %d ===\n", i + 1);

        printf("Digite o nome do território: ");
        fgets(territorios[i].nome, TAM_STRING, stdin);
        limparBufferEntrada();

        printf("Digite a cor do exército: ");
        fgets(territorios[i].cor, TAM_STRING, stdin);
        limparBufferEntrada();

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
        limparBufferEntrada();
    }

    // Exibição dos dados
    printf("\n\n=== Dados dos Territórios Cadastrados ===\n");
    for (int i = 0; i < QTD_TERRITORIOS; i++)
    {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s", territorios[i].nome);
        printf("Cor do Exército: %s", territorios[i].cor);
        printf("Quantidade de Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}