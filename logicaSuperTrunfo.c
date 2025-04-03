#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado[100], codigo[100], nome[100];
    int populacao, numero;
    float area;
    long double quociente;
    double pib;
    long double percapita;
    double poder;

    char estado2[100], codigo2[100], nome2[100];
    int populacao2, numero2;
    float area2;
    long double quociente2;
    double pib2;
    long double percapita2;
    double poder2;

    // Carta 1
    printf("Carta 1:\n\n");
    printf("Estado: ");
    scanf(" %99[^\n]", estado); 
    printf("Código da cidade: ");
    scanf(" %99[^\n]", codigo); 
    printf("Nome da cidade: ");
    scanf(" %99[^\n]", nome); 
    printf("População: ");
    scanf("%d", &populacao);  
    printf("Área em km²: ");
    scanf("%f", &area);  
    printf("PIB: ");
    scanf("%lf", &pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &numero);  

    quociente = (long double)populacao / area;
    printf("O valor da Densidade Populacional é: %.2Lf\n", quociente);

    percapita = (long double)pib / populacao;
    printf("O valor do PIB per capita é: %.2Lf\n", percapita);

    poder = (populacao + area + pib + numero + quociente + (1 / percapita)) / 6;
    printf("O valor de poder é: %.0f\n\n", poder);   

    // Carta 2
    printf("Carta 2:\n\n");
    printf("Estado: ");
    scanf(" %99[^\n]", estado2); 
    printf("Código da cidade: ");
    scanf(" %99[^\n]", codigo2); 
    printf("Nome da cidade: ");
    scanf(" %99[^\n]", nome2); 
    printf("População: ");
    scanf("%d", &populacao2);  
    printf("Área em km²: ");
    scanf("%f", &area2);  
    printf("PIB: ");
    scanf("%lf", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &numero2);  

    quociente2 = (long double)populacao2 / area2;
    printf("O valor da Densidade Populacional é: %.2Lf\n", quociente2);

    percapita2 = (long double)pib2 / populacao2;
    printf("O valor do PIB per capita é: %.2Lf\n", percapita2);

    poder2 = (populacao2 + area2 + pib2 + numero2 + quociente2 + (1 / percapita2)) / 6;
    printf("O valor de poder é: %.0f\n\n", poder2);  

    // Comparações entre as cartas
    if (populacao > populacao2) {
        printf("População: Carta 1 venceu\n");
    } else {
        printf("População: Carta 2 venceu\n");
    }
    if (area > area2) {
        printf("Área: Carta 1 venceu\n");
    } else {
        printf("Área: Carta 2 venceu\n");
    }
    if (pib > pib2) {
        printf("PIB: Carta 1 venceu\n");
    } else {
        printf("PIB: Carta 2 venceu\n");
    }
    if (numero > numero2) {
        printf("Pontos Turísticos: Carta 1 venceu\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu\n");
    }
    if (quociente > quociente2) {
        printf("Densidade Populacional: Carta 1 venceu\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu\n");
    }
    if (percapita > percapita2) {
        printf("PIB per capita: Carta 1 venceu\n");
    } else {
        printf("PIB per capita: Carta 2 venceu\n");
    }
    if (poder > poder2) {
        printf("Super Poder: Carta 1 venceu\n\n");
    } else {
        printf("Super Poder: Carta 2 venceu\n\n");
    }
    int opcao;
    do {
        //opções de escolhas para a comparação
        printf("\nQual atributo você deseja comparar?\n"
               "0- Estado da Cidade\n"
               "1- Codigo da Cidade\n"
               "2- Nome da Cidade\n"
               "3- População\n"
               "4- Área\n"
               "5- PIB\n"
               "6- Pontos Turísticos\n"
               "7- Densidade Populacional\n"
               "8- PIB per capita\n"
               "9- Super Poder\n"
               "10- Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 0:
                printf("Carta 1 - %s\n", estado);
                printf("Carta 2 - %s\n", estado2);
                break;

            case 1:
                printf("Carta 1 - %s\n", codigo);
                printf("Carta 2 - %s\n", codigo2);
                break;

            case 2:
                printf("Carta 1 - %s\n", nome);
                printf("Carta 2 - %s\n", nome2);
                break;

            case 3:
                if (populacao > populacao2) {
                    printf("Carta 1 tem %d a mais do que a Carta 2 - Carta 1 Venceu!\n\n", populacao - populacao2);
                } else if (populacao2 > populacao) {
                    printf("Carta 2 tem %d a mais do que a Carta 1 - Carta 2 Venceu!\n\n", populacao2 - populacao);
                } else {
                    printf("EMPATE!\n\n");
                }
                break;

            case 4:
                if (area > area2) {
                    printf("Carta 1 tem %.2f a mais do que a Carta 2 - Carta 1 Venceu!\n\n", area - area2);
                } else if (area2 > area) {
                    printf("Carta 2 tem %.2f a mais do que a Carta 1 - Carta 2 Venceu!\n\n", area2 - area);
                } else {
                    printf("EMPATE!\n\n");
                }
                break;

            case 5:
                if (pib > pib2) {
                    printf("Carta 1 tem %.2f a mais do que a Carta 2 - Carta 1 Venceu!\n\n", pib - pib2);
                } else if (pib2 > pib) {
                    printf("Carta 2 tem %.2f a mais do que a Carta 1 - Carta 2 Venceu!\n\n", pib2 - pib);
                } else {
                    printf("EMPATE!\n\n");
                }
                break;

            case 6:
                if (numero > numero2) {
                    printf("Carta 1 tem %d a mais do que a Carta 2 - Carta 1 Venceu!\n\n", numero - numero2);
                } else if (numero2 > numero) {
                    printf("Carta 2 tem %d a mais do que a Carta 1 - Carta 2 Venceu!\n\n", numero2 - numero);
                } else {
                    printf("EMPATE!\n\n");
                }
                break;

            case 7:
                if (quociente > quociente2) {
                    printf("Carta 1 tem %.2Lf a mais do que a Carta 2 - Carta 1 Venceu!\n\n", quociente - quociente2);
                } else if (quociente2 > quociente) {
                    printf("Carta 2 tem %.2Lf a mais do que a Carta 1 - Carta 2 Venceu!\n\n", quociente2 - quociente);
                } else {
                    printf("EMPATE!\n\n");
                }
                break;

            case 8:
                if (percapita > percapita2) {
                    printf("Carta 1 tem %.2Lf a mais do que a Carta 2 - Carta 1 Venceu!\n\n", percapita - percapita2);
                } else if (percapita2 > percapita) {
                    printf("Carta 2 tem %.2Lf a mais do que a Carta 1 - Carta 2 Venceu!\n\n", percapita2 - percapita);
                } else {
                    printf("EMPATE!\n\n");
                }
                break;

            case 9:
                if (poder > poder2) {
                    printf("Carta 1 tem %.2f a mais do que a Carta 2 - Carta 1 Venceu!\n\n", poder - poder2);
                } else if (poder2 > poder) {
                    printf("Carta 2 tem %.2f a mais do que a Carta 1 - Carta 2 Venceu!\n\n", poder2 - poder);
                } else {
                    printf("EMPATE!\n\n");
                }
                break;

            case 10:
                printf("Encerrado!\n\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n\n");
                break;
        }

    } while (opcao != 10);

    return 0;
}