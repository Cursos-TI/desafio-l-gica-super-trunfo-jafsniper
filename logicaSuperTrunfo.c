#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    clrscr();
    printf("Desafio Super Trunfo!\n");
    int codigo1=0, codigo2=0;
    char estado1 [30], estado2 [30];
    char cidade1 [30], cidade2 [30];
    int populacao1=0, populacao2=0;
    int area1=0, area2=0;
    int pib1=0, pib2=0;
    int p_tur1=0, p_tur2=0;


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
    printf("Código da carta1:\n");
        scanf("%i", &codigo1);
    printf("Estado:\n");
        scanf("%s", &estado1);
    printf("Cidade:\n");
        scanf("%s", &cidade1);
    printf("População:\n");
        scanf("%i", &populacao1);
    printf("Área em M2:\n");
        scanf("%i", &area1);
    printf("PIB:\n");
        scanf("%i", &pib1);
    printf("Quantidade de pontos turísticos:\n");
        scanf("%i", &p_tur1);
    printf("Código da carta2:\n");
        scanf("%i", &codigo2);
    printf("Estado:\n");
        scanf("%s", &estado2);
    printf("Cidade:\n");
        scanf("%s", &cidade2);
    printf("População:\n");
        scanf("%i", &populacao2);
    printf("Área em M2:\n");
        scanf("%i", &area2);
    printf("PIB:\n");
        scanf("%i", &pib2);
    printf("Quantidade de pontos turísticos:\n");
        scanf("%i", &p_tur2);


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
