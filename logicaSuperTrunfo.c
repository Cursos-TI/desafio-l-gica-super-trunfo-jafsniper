#include <stdio.h>
#include <string.h>
#include <conio.h>
// Estrutura:   
    // Nome da estrutura
    // (Condição)
    // {Código}

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main()
    {
    printf("Desafio Super Trunfo!\n");
    printf("\n");
    
    int codigo1=0, codigo2=0;
    char estado1 [30], estado2 [30];
    char cidade1 [30], cidade2 [30];
    int populacao1=0, populacao2=0;
    int area1=0, area2=0;
    int pib1=0, pib2=0;
    int p_tur1=0, p_tur2=0;
    int pontuacao1=0;
    int pontuacao2=0;


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
    
    printf("*** 1 *** Código da carta 1:\n");
        scanf("%i", &codigo1);
    printf("*** 1 *** Estado:\n");
        scanf("%s", &estado1);
    printf("*** 1 *** Cidade:\n");
        scanf("%s", &cidade1);
    printf("*** 1 *** População:\n");
        scanf("%i", &populacao1);
    printf("*** 1 *** Área em Km2:\n");
        scanf("%i", &area1);
    printf("*** 1 *** PIB:\n");
        scanf("%i", &pib1);
    printf("*** 1 *** Quantidade de pontos turísticos:\n");
        scanf("%i", &p_tur1);
        printf("\n");
    printf("*** 2 *** Código da carta 2:\n");
        scanf("%i", &codigo2);
    printf("*** 2 *** Estado:\n");
        scanf("%s", &estado2);
    printf("*** 2 *** Cidade:\n");
        scanf("%s", &cidade2);
    printf("*** 2 *** População:\n");
        scanf("%i", &populacao2);
    printf("*** 2 *** Área em Km2:\n");
        scanf("%i", &area2);
    printf("*** 2 *** PIB:\n");
        scanf("%i", &pib2);
    printf("*** 2 *** Quantidade de pontos turísticos:\n");
        scanf("%i", &p_tur2);
        printf("\n");
        printf("\n");
    

        printf("Valores fornecidos:\n");
        printf("Carta 1:   ------------%i                ", codigo1);
        printf("Carta 2:   ------------%i\n", codigo2);
        printf("Estado 1:  ------------%s                 ", estado1);
        printf("Estado 2:  ------------%s\n", estado2);
        printf("Cidade 1:  ------------%s       ", cidade1);
        printf("Cidade 2:  ------------%s\n", cidade2);
        printf("População 1: ----------%i habitantes  ", populacao1);
        printf("População 2: ----------%i habitantes\n", populacao2);
        printf("Área 1:    ------------%i Km2           ", area1);
        printf("Área 2:    ------------%i Km2\n", area2);
        printf("PIB 1:     ------------%i per capita  ", pib1);
        printf("PIB 2:     ------------%i per capita\n", pib2);
        printf("Pontos turísticos 1: --%i                 ", p_tur1);
        printf("Pontos turísticos 2: --%i\n", p_tur2);
        printf("\n");
        //printf("========================================");
           


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    // int codigo1=0, codigo2=0;
    // char estado1 [30], estado2 [30];
    // char cidade1 [30], cidade2 [30];
    // int populacao1=0, populacao2=0;
    // int area1=0, area2=0;
    // int pib1=0, pib2=0;
    // int p_tur1=0, p_tur2=0;
   
    if (populacao1 == populacao2){
        printf("Cidade 1 e 2 têm a mesma população.\n");
        pontuacao1 ++;
        pontuacao2 ++;
        }
            else if(populacao1 > populacao2){
            printf("Cidade 1 tem maior população.\n");
            pontuacao1 ++;
            }
        else {
        printf("Cidade 2 tem maior população.\n");
        pontuacao2 ++;
        }
    //=========================================
    if (area1 == area2){
        printf("Cidade 1 e 2 têm a mesma área.\n");
        pontuacao1 ++;
        pontuacao2 ++;
        }
            else if (area1 > area2){
            printf("Cidade 1 tem maior área.\n");
            pontuacao1 ++;
            }   
        else {
        printf("Cidade 2 tem maior área.\n");
        pontuacao2 ++;
        }
    //=========================================
    
    if (pib1 == pib2){
        printf("Cidade 1 e 2 têm o mesmo pib.\n");
        pontuacao1 ++;
        pontuacao2 ++;
        }
            else if (pib1> pib2){
            printf("Cidade 1 tem maior pib.\n");
            pontuacao1 ++;
            }
        else {
        printf("Cidade 2 tem maior pib.\n");
        pontuacao2 ++;
        } 
    //=========================================
    if (p_tur1 == p_tur2) {
        printf("Cidade 1 e 2 têm a mesma quantidade de pontos turísticos.\n");
        pontuacao1 ++;
        pontuacao2 ++;
        }
            else if (p_tur1 > p_tur2){
            printf("Cidade 1 tem mais pontos turísticos.\n");
            pontuacao1 ++;
            }
        else {
        printf("Cidade 2 tem mais pontos turísticos.\n");
        pontuacao2 ++;
        printf("\n");
        }
       //=========================================
    
    if (pontuacao1 > pontuacao2){
        printf("A carta vencedora é a carta *** %i ***", codigo1);
        }
     else {
        printf("A carta vencedora é a carta *** %i ***", codigo2);
        return 0;
        }

}
       // END

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

