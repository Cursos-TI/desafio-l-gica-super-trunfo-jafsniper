#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("Desafio Super Trunfo!\n");
    int codigo
    char estado [30]
    char cidade [30]
    int populacao
    int area
    int pib
    int p_tur

    //LEITURA DOS ATRIBUTOS DAS CARTAS  -- estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("Digite o que se pede:\n");
    printf("Código da carta:\n");
        scanf("%i", &codigo);
    printf("Estado:\n");
        scanf("%s", &estado);
    printf("Cidade:\n");
        scanf("%s", &cidade);
    printf("População:\n");
        scanf("%i", &populacao);
    printf("Área em M2:\n");
        scanf("%i", &area);
    printf("PIB:\n");
        scanf("%i", &pib);
    printf("Quantidade de pontos turísticos:\n");
        scanf("%i", &p_tur);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
