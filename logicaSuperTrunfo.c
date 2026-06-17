#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // vAriaveis para a Carta 1
    char Estado1[50], Codigo1[50], Cidade1[50];
    unsigned long int Populacao1;
    int Pontos1;
    float Area1, PIB1, PIBper1, Densidade1;

    // Variaveis para a Carta 2
    char Estado2[50], Codigo2[50], Cidade2[50];
    unsigned long int Populacao2;
    int Pontos2;
    float Area2, PIB2, PIBper2, Densidade2;

    // Escolha do jogador parta a comparação de cartas
    int escolhadoatributo1, escolhadoatributo2;
    float somaCarta1 = 0.0f, somaCarta2 = 0.0f;
    int resultado1 = 0, resultado2 = 0;
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    //
    // (Repita para cada propriedade)

    // Área para exibição do título do desafio

    printf("DESAFIO SUPER TRUNFO - PAÍSES\n");
    printf("TEMA 1 - CADASTRO DAS CARTAS\n");

    // Área para entrada de dados da Carta 1

    printf("===== CADASTRE A CARTA 1 =====\n");

    printf("Digite o Estado da sua carta:\n");
    scanf("%s", Estado1);

    printf("Digite o código da sua carta:\n");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade da sua carta:\n");
    scanf("%s", Cidade1);

    printf("Digite a população da sua carta:\n");
    scanf("%lu", &Populacao1);

    printf("Digite o número de pontos turísticos da sua carta:\n");
    scanf("%d", &Pontos1);

    printf("Digite a área da sua carta:\n");
    scanf("%f", &Area1);

    printf("Digite o PIB da sua carta:\n");
    scanf("%f", &PIB1);

    // Área de calculo do PIB per capita e da densidade demográfica da Carta 1
    Densidade1 = (float)Populacao1 / Area1;
    PIBper1 = (float)PIB1 * 1000000000 / Populacao1;

    // Área para entrada de dados da Carta 2

    printf("===== CADASTRE A CARTA 2 =====\n");
    printf("Digite o Estado da sua carta:\n");
    scanf("%s", Estado2);

    printf("Digite o código da sua carta:\n");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade da sua carta:\n");
    scanf("%s", Cidade2);

    printf("Digite a população da sua carta:\n");
    scanf("%lu", &Populacao2);

    printf("Digite o número de pontos turísticos da sua carta:\n");
    scanf("%d", &Pontos2);

    printf("Digite a área da sua carta:\n");
    scanf("%f", &Area2);

    printf("Digite o PIB da sua carta:\n");
    scanf("%f", &PIB2);

    // Área de calculo do PIB per capita e da densidade demográfica da Carta 2

    Densidade2 = (float)Populacao2 / Area2;
    PIBper2 = (float)PIB2 * 1000000000 / Populacao2;

    // Área para exibição dos dados da cidade

    printf("\n===== DADOS DAS CARTAS CADASTRADAS COM SUCESSO =====\n");

    printf("===== CADASTRO COM SUCESSO DA CARTA 1 =====\n");

    printf("Estado:%s\n", Estado1);
    printf("Código:%s\n", Codigo1);
    printf("Cidade:%s\n", Cidade1);
    printf("População:%lu\n", Populacao1);
    printf("Pontos Turísticos:%d\n", Pontos1);
    printf("Área:%.2f km²\n", Area1);
    printf("PIB:%.2f bilhões de reais\n", PIB1);
    printf("Densidade Populacional:%.2f hab/km²\n", Densidade1);
    printf("PIB Per Capita:%.2f reais\n", PIBper1);

    printf("===== CADASTRO COM SUCESSO DA CARTA 2 =====\n");

    printf("Estado:%s\n", Estado2);
    printf("Código:%s\n", Codigo2);
    printf("Cidade:%s\n", Cidade2);
    printf("População:%lu\n", Populacao2);
    printf("Pontos Turísticos:%d\n", Pontos2);
    printf("Área:%.2f km²\n", Area2);
    printf("PIB:%.2f bilhões de reais\n", PIB2);
    printf("Densidade Populacional:%.2f hab/km²\n", Densidade2);
    printf("PIB Per Capita:%.2f reais\n", PIBper2);

    // Área da escolha do atributo para a batalha

    printf("===== ESCOLHA QUAIS ATRIBUTOS SERÃO COMPARADOS NA BATALHA DE CARTAS =====\n");
    printf("ESCOLHA DO ATRIBUTO 1\n");
    printf("Escolha uma opção:\n");
    printf("1 População\n");
    printf("2 Pontos Turísticos\n");
    printf("3 Área\n");
    printf("4 PIB\n");
    printf("5 Densidade\n");
    printf("6 PIB Per capita\n");
    scanf("%d", &escolhadoatributo1);

    // Escolha atributo 1

    switch (escolhadoatributo1)
    {
    case 1:
        printf("Você escolheu comparar a população das cartas...\n");
        somaCarta1 += Populacao1;
        somaCarta2 += Populacao2;

        resultado1 = (Populacao1 > Populacao2) ? 1 : ((Populacao1 < Populacao2) ? -1 : 0);
        break;

    case 2:

        printf("Você escolheu comparar os pontos turísticos das cartas...\n");
        somaCarta1 += Pontos1;
        somaCarta2 += Pontos2;
        resultado1 = (Pontos1 > Pontos2) ? 1 : ((Pontos1 < Pontos2) ? -1 : 0);
        break;

    case 3:
        printf("Você escolheu comparar as áreas das cartas...\n");
        somaCarta1 += Area1;
        somaCarta2 += Area2;
        resultado1 = (Area1 > Area2) ? 1 : ((Area1 < Area2) ? -1 : 0);
        break;

    case 4:
        printf("Você escolheu comparar os PIBs das cartas...\n");
        somaCarta1 += PIB1;
        somaCarta2 += PIB2;
        resultado1 = (PIB1 > PIB2) ? 1 : ((PIB1 < PIB2) ? -1 : 0);
        break;

    case 5:
        printf("Você escolheu comparar as densidades populacionais das cartas...\n");
        somaCarta1 += 1 /Densidade1;
        somaCarta2 += 1 /Densidade2;
        resultado1 = (Densidade1 < Densidade2) ? 1 : ((Densidade1 > Densidade2) ? -1 : 0);
        break;

    case 6:
        printf("Você escolheu comparar os PIBs per capita das cartas...\n");
        somaCarta1 += PIBper1;
        somaCarta2 += PIBper2;
        resultado1 = (PIBper1 > PIBper2) ? 1 : ((PIBper1 < PIBper2) ? -1 : 0);
        break;

    default:
        printf("OPÇÃO INVÁLIDA.\n");
        return 1;
    }

    printf("ESCOLHA DO ATRIBUTO 2\n");
    printf("Escolha uma opção:\n");
    printf("1 População\n");
    printf("2 Pontos Turísticos\n");
    printf("3 Área\n");
    printf("4 PIB\n");
    printf("5 Densidade\n");
    printf("6 PIB Per capita\n");
    scanf("%d", &escolhadoatributo2);
    if (escolhadoatributo1 == escolhadoatributo2)
    {
        printf("Você escolheu o mesmo atributo! Escolha outro atributo para continuar.\n");
        return 0;
    }

    // Escolha atributo 2
    switch (escolhadoatributo2)
    {
    case 1:
        printf("Você escolheu comparar a população das cartas...\n");
        somaCarta1 += Populacao1;
        somaCarta2 += Populacao2;
        resultado2 = (Populacao1 > Populacao2) ? 1 : ((Populacao1 < Populacao2) ? -1 : 0);
        break;

    case 2:
        printf("Você escolheu comparar os pontos turísticos das cartas...\n");
        somaCarta1 += Pontos1;
        somaCarta2 += Pontos2;
        resultado2 = (Pontos1 > Pontos2) ? 1 : ((Pontos1 < Pontos2) ? -1 : 0);
        break;

    case 3:
        printf("Você escolheu comparar as áreas das cartas...\n");
        somaCarta1 += Area1;
        somaCarta2 += Area2;
        resultado2 = (Area1 > Area2) ? 1 : ((Area1 < Area2) ? -1 : 0);
        break;

    case 4:
        printf("Você escolheu comparar os PIBs das cartas...\n");
        somaCarta1 += PIB1;
        somaCarta2 += PIB2;
        resultado2 = (PIB1 > PIB2) ? 1 : ((PIB1 < PIB2) ? -1 : 0);
        break;

    case 5:
        printf("Você escolheu comparar as densidades populacionais das cartas...\n");
        somaCarta1 += 1 / Densidade1;
        somaCarta2 += 1 / Densidade2;
        resultado2 = (Densidade1 < Densidade2) ? 1 : ((Densidade1 > Densidade2) ? -1 : 0);
        break;

    case 6:
        printf("Você escolheu comparar os PIBs per capita das cartas...\n");
        somaCarta1 += PIBper1;
        somaCarta2 += PIBper2;
        resultado2 = (PIBper1 > PIBper2) ? 1 : ((PIBper1 < PIBper2) ? -1 : 0);
        break;

    default:
        printf("OPÇÃO INVÁLIDA.\n");
        return 1;
    }

    printf("===== VERIFICANDO O RESULTADO =====\n");
    printf("Cidade 1: %s\n", Cidade1);
    printf("Cidade 2: %s\n\n", Cidade2);
    printf("\nResultado do atributo 1: ");
if(resultado1 == 1)
    printf("%s venceu\n", Cidade1);
else if(resultado1 == -1)
    printf("%s venceu\n", Cidade2);
else
    printf("Empate\n");

printf("\nResultado do atributo 2: ");

if(resultado2 == 1)
    printf("%s venceu\n", Cidade1);
else if(resultado2 == -1)
    printf("%s venceu\n", Cidade2);
else
    printf("Empate\n");
    printf("Soma Carta 1: %.2f\n", somaCarta1);
    printf("Soma Carta 2: %.2f\n", somaCarta2);
    if (somaCarta1 > somaCarta2)
    {
        printf("Carta 1 venceu!\n");
    }
    else if (somaCarta2 > somaCarta1)
    {
        printf("Carta 2 venceu!\n");
    }
    else
    {
        printf("Empate!\n");
    }

    return 0;
}
