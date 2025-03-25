#include<stdio.h>

int main(){

    // Declarando as variáveis
    char estad1[10] = "SC", estad2[10] = "PR", cod1[10] = "A01", cod2[10] = "B01",
    cid1[20] = "Florianópolis", cid2[20] = "Curitiba";
    int pop1 = 516524, pop2 = 1773733, tur1 = 20, tur2 = 10;
    float area1 = 675.4, area2 = 435, pib1 = 23.5, pib2 = 98;
    float den1 = pop1 / area1, den2 = pop2 / area2;
    float pibp1 = pib1 * 1000000000 / pop1, pibp2 = pib2 * 1000000000 / pop2;
    int op1, op2, resultado1, resultado2, teste = 0;
    float soma1 = 0, soma2 = 0;

    // Comparando um atributo das cartas

    printf("\nBATALHA DE ATRIBUTOS: %s x %s\n", cid1, cid2);
    printf("(1) População\n(2) Área\n(3) PIB\n(4) Pontos Turísticos\n");
    printf("(5) Densidade Populacional\n(6) PIB per Capita\n");
    
    printf("\nEscolha o 1º atributo para comparação: ");
    scanf("%d", &op1);

    switch (op1) {

        case 1:
            printf("Você escolheu a opção População:\n");
            printf("Florianópolis: %d hab. | Curitiba: %d hab.\n", pop1, pop2);
            soma1 += pop1;
            soma2 += pop2;
            resultado1 = pop1 > pop2;
            break;
        case 2:
            printf("Você escolheu a opção Área:\n");
            printf("Florianópolis: %.2f km² | Curitiba: %.2f km²\n", area1, area2);
            soma1 += area1;
            soma2 += area2;
            resultado1 = area1 > area2;
            break;
        case 3:
            printf("Você escolheu a opção PIB:\n");
            printf("Florianópolis: R$ %.2f bilhões| Curitiba: R$ %.2f bilhões\n", pib1, pib2);
            soma1 += pib1;
            soma2 += pib2;
            resultado1 = pib1 > pib2;
            break;
        case 4:
            printf("Você escolheu a opção Pontos Turísticos:\n");
            printf("Florianópolis: %d | Curitiba: %d\n", tur1, tur2);
            soma1 += tur1;
            soma2 += tur2;
            resultado1 = tur1 > tur2;
            break;
        case 5:
            printf("Você escolheu a opção Densidade Populacional:\n");
            printf("Florianópolis: %.2f hab/km² | Curitiba: %.2f hab/km² \n", den1, den2);
            soma1 += (1 / den1);
            soma2 += (1 / den2);
            resultado1 = den1 < den2;
            break;
        case 6:
            printf("Você escolheu a opção PIB per Capita:\n");
            printf("Florianópolis: R$ %.2f | Curitiba: R$ %.2f\n", pibp1, pibp2);
            soma1 += pibp1;
            soma2 += pibp2;
            resultado1 = pibp1 > pibp2;
            break;
        default:
            printf("\n\tOpção inválida!\n");
            break;
    }

    if (op1 >= 1 && op1 <= 6) {

        printf("Escolha o 2º atributo para comparação: ");
        scanf("%d", &op2);

        if (op1 == op2) {
            printf("\n\tO 2º atributo deve ser diferente do primeiro.\n");
            printf("\tReinicie o jogo para tentar novamente...\n");
        } else {
            teste = 1;
            switch (op2) {
                case 1:
                    printf("Você escolheu a opção População.\n");
                    printf("Florianópolis: %d hab. | Curitiba: %d hab.\n", pop1, pop2);
                    soma1 += pop1;
                    soma2 += pop2;
                    resultado2 = pop1 > pop2;
                    break;
                case 2:
                    printf("Você escolheu a opção Área.\n");
                    printf("Florianópolis: %.2f km² | Curitiba: %.2f km²\n", area1, area2);
                    soma1 += area1;
                    soma2 += area2;
                    resultado2 = area1 > area2;
                    break;
                case 3:
                    printf("Você escolheu a opção PIB.\n");
                    printf("Florianópolis: R$ %.2f bilhões | Curitiba: R$ %.2f bilhões\n", pib1, pib2);
                    soma1 += pib1;
                    soma2 += pib2;
                    resultado2 = pib1 > pib2;
                    break;
                case 4:
                    printf("Você escolheu a opção Pontos Turísticos.\n");
                    printf("Florianópolis: %d | Curitiba: %d\n", tur1, tur2);
                    soma1 += tur1;
                    soma2 += tur2;
                    resultado2 = tur1 > tur2;
                    break;
                case 5:
                    printf("Você escolheu a opção Densidade Populacional.\n");
                    printf("Florianópolis: %.2f hab/km² | Curitiba: %.2f hab/km²\n", den1, den2);
                    soma1 += (1 / den1);
                    soma2 += (1 / den2);
                    resultado2 = den1 < den2;
                    break;
                case 6:
                    printf("Você escolheu a opção PIB per Capita.\n");
                    printf("Florianópolis: R$ %.2f | Curitiba: R$ %.2f\n", pibp1, pibp2);
                    soma1 += pibp1;
                    soma2 += pibp2;
                    resultado2 = pibp1 > pibp2;
                    break;
                default:
                    printf("\n\tOpção inválida!\n");
                    printf("\tReinicie o jogo para tentar novamente...\n");
                    teste = 0;
                    break;

            }

        }

    } else {printf("\tReinicie o jogo para tentar novamente...\n");}

    if (teste == 1) {
        printf("\n\t# BATALHA INDIVIDUAL DE ATRIBUTOS\n\nResultado: ");
        resultado1 && resultado2 ?
        printf("%s venceu!\n", cid1) :
        resultado1 != resultado2 ?
        printf("Deu EMPATE!\n") :
        printf("%s venceu!\n", cid2);
    }

    if (teste == 1) {
        printf("\n\t# BATALHA DE SOMA DE ATRIBUTOS\n\n");
        printf("%s: %.2f | %s: %.2f\nResultado: ", cid1, soma1, cid2, soma2);
    }
    
    soma1 == soma2 ?
    printf("Deu EMPATE!\n") :
    soma1 > soma2 ?
    printf("%s venceu!\n", cid1) :
    printf("%s venceu!\n", cid2);

    return 0;

}