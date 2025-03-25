#include<stdio.h>

int main(){

    // Declarando as variáveis
    char estad1[10], estad2[10], cod1[10], cod2[10],
    cid1[20], cid2[20];
    int pop1, pop2, tur1, tur2;
    float area1, area2, pib1, pib2;

    // Cadastrando as cartas
    printf("\t---CADASTRANDO AS CARTAS---\n");

    // Cadastrando carta 1
    printf("\nCadastro das informações da Carta 1:\n");
    printf("Insira o Estado da Carta 1: ");
    scanf("%s", &estad1);
    printf("Insira o Código da Carta 1: ");
    scanf("%s", &cod1);
    printf("Insira o nome da cidade da Carta 1: ");
    scanf("%s", &cid1);
    printf("Insira a população da cidade da Carta 1: ");
    scanf("%d", &pop1);
    printf("Insira a área (em km²) da cidade da Carta 1: ");
    scanf("%f", &area1);
    printf("Insira o PIB (em bilhões de R$) da cidade da Carta 1: ");
    scanf("%f", &pib1);
    printf("Insira o número de pontos turísticos da cidade da Carta 1: ");
    scanf("%d", &tur1);
    
    // Cadastrando Carta 2
    printf("\nCadastro das informações da Carta 2:\n");
    printf("Insira o Estado da Carta 2: ");
    scanf("%s", &estad2);
    printf("Insira o Código da Carta 2: ");
    scanf("%s", &cod2);
    printf("Insira o nome da cidade da Carta 2: ");
    scanf("%s", &cid2);
    printf("Insira a população da cidade da Carta 2: ");
    scanf("%d", &pop2);
    printf("Insira a área (em km²) da cidade da Carta 2: ");
    scanf("%f", &area2);
    printf("Insira o PIB (em bilhões de R$) da cidade da Carta 2: ");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos da cidade da Carta 2: ");
    scanf("%d", &tur2);

    float den1 = pop1 / area1, den2 = pop2 / area2;
    float pibp1 = pib1 * 1000000000 / pop1, pibp2 = pib2 * 1000000000 / pop2;

    // Exibindo as informações das cartas
    printf("\n\t---INFORMAÇÕES DAS CARTAS---\n");
    printf("\nCarta 1:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\n", estad1, cod1, cid1);
    printf("População: %d\nÁrea: %.2f\nPIB: %.2f bilhões de reais\n", pop1, area1, pib1);
    printf("Número de Pontos Turísticos: %d\n", tur1);
    printf("Densidade Populacional %.2f hab/km²\n", den1);
    printf("PIB per Capita: %.2f reais\n", pibp1);
    printf("\nCarta 2:\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\n", estad2, cod2, cid2);
    printf("População: %d\nÁrea: %.2f\nPIB: %.2f bilhões de reais\n", pop2, area2, pib2);
    printf("Número de Pontos Turísticos: %d\n", tur2);
    printf("Densidade Populacional %.2f hab/km²\n", den2);
    printf("PIB per Capita: %.2f reais\n", pibp2);

    // Comparando um atributo das cartas

    printf("\n\tBATALHA DE ATRIBUTOS\n");
    printf("(1) População\n(2) Área\n(3) PIB\n(4) Pontos Turísticos\n");
    printf("(5) Densidade Populacional\n(6) PIB per Capita\n");
    printf("\nEscolha um atributo para comparação: ");

    int op;
    scanf("%d", &op);

    switch (op) {

        case 1:
            printf("\n%s - População: %d\n%s - População: %d\n", cid1, pop1, cid2, pop2);
            if (pop1 > pop2) {
                printf("%s VENCEU!\n", cid1);
            } else if (pop1 < pop2) {
                printf("%s VENCEU!\n", cid2);
            } else {printf("Empatou.\n");}
            break;

        case 2:
            printf("\n%s - Área: %f km²\n%s - Área: %f km²\n", cid1, area1, cid2, area2);
            if (area1 > area2) {
                printf("%s VENCEU!\n", cid1);
            } else if (area1 < area2) {
                printf("%s VENCEU!\n", cid2);
            } else {printf("Empatou.\n");}
            break;

        case 3:
            printf("\n%s - PIB: R$ %f bilhões\n%s - PIB: R$ %f bilhões\n", cid1, pib1, cid2, pib2);
            if (pib1 > pib2) {
                printf("%s VENCEU!\n", cid1);
            } else if (pib1 < pib2) {
                printf("%s VENCEU!\n", cid2);
            } else {printf("Empatou.\n");}
            break;

        case 4:
            printf("\n%s - Pontos Turísticos: %d\n%s - Pontos Turísticos: %d\n", cid1, tur1, cid2, tur2);
            if (tur1 > tur2) {
                printf("%s VENCEU!\n", cid1);
            } else if (tur1 < tur2) {
                printf("%s VENCEU!\n", cid2);
            } else {printf("Empatou.\n");}
            break;

        case 5:
            printf("\n%s - Densidade Populacional: %.2f hab/km²\n%s - Densidade Populacional: %.2f hab/km²\n", cid1, den1, cid2, den2);
            if (den1 < den2) {
                printf("%s VENCEU!\n", cid1);
            } else if (den1 > den2) {
                printf("%s VENCEU!\n", cid2);
            } else {printf("Empatou.\n");}
            break;

        case 6:
            printf("\n%s - PIB per Capita: R$ %.2f\n%s - PIB per Capita: R$ %.2f\n", cid1, pibp1, cid2, pibp2);
            if (pibp1 > pibp2) {
                printf("%s VENCEU!\n", cid1);
            } else if (pibp1 < pibp2) {
                printf("%s VENCEU!\n", cid2);
            } else {printf("Empatou.\n");}
            break;

        default:
            printf("\n\tOpção inválida!\n");

    }

    return 0;

}