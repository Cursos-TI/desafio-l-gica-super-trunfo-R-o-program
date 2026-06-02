#include <stdio.h>

int main(){
    //declaração de variáveis
    int opcao1, opcao2;
    char estado1[20], estado2[20];
    char codigo1[3], codigo2[3];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2; //%lu para leitura e exibição de unsigned long int
    float area1, area2;
    float pib1, pib2;
    float atributo1Carta1 = 0, atributo1Carta2 = 0, atributo2Carta1 = 0, atributo2Carta2 = 0;
    float soma1;
    float soma2;
    int qtd_ponto_turistico1, qtd_ponto_turistico2;
    float dens_populacional1, dens_populacional2;
    float pib_per_capita1, pib_per_capita2; 
    float superPoder1, superPoder2;

    //coleta de informações da carta 1
    printf("***************SUPER TRUNFO***************\n");
    printf("Digite o nome do estado 1: \n");
    scanf("%s", estado1);
    printf("Digite o código 1\n(o código é composto pela primeira letra do nome do estado e dois números. Exemplo: A01):\n");
    scanf("%s", codigo1);
    printf("Digite a cidade do estado 1: \n");
    scanf("%s", cidade1);
    printf("Digite a população da cidade 1: \n");
    scanf("%lu", &populacao1);
    printf("Digite a área em km² da cidade 1: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos da cidade1: \n");
    scanf("%d", &qtd_ponto_turistico1);

    //coleta de informações da carta 2
    printf("***************SUPER TRUNFO***************\n");
    printf("Digite o nome do estado 2: \n");
    scanf("%s", estado2);
    printf("Digite o código 2\n(o código é composto pela primeira letra do nome do estado e dois números. Exemplo: A01):\n");
    scanf("%s", codigo2);
    printf("Digite a cidade do estado 2: \n");
    scanf("%s", cidade2);
    printf("Digite a população da cidade 2: \n");
    scanf("%lu", &populacao2);
    printf("Digite a área em km² da cidade 2: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da cidade 2: \n");
    scanf("%d", &qtd_ponto_turistico2);

    //cálculo de densidade populacional
    dens_populacional1 = (float)populacao1 / area1;
    dens_populacional2 = (float)populacao2 / area2;
    
    //cálculo do PIB per capita
    pib_per_capita1 = (float)(pib1 * 1000000000) / populacao1; // multiplicamos o PIB por 1 bilhão para converter de bilhões para reais
    pib_per_capita2 = (float)(pib2 * 1000000000) / populacao2; // (float) é para a conversão explicita

    //calculando o superpoder
    superPoder1 = (populacao1 + area1 + pib1 + qtd_ponto_turistico1 + (1/dens_populacional1));
    superPoder2 = (populacao2 + area2 + pib2 + qtd_ponto_turistico2 + (1/dens_populacional2));

    //exibindo os resultados
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", qtd_ponto_turistico1);
    printf("Densidade populacional: %.2f hab/km²\n", dens_populacional1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1); 
    printf("Superpoder: %.2f\n", superPoder1);   
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", qtd_ponto_turistico2);
    printf("Densidade populacional: %.2f hab/km²\n", dens_populacional2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);
    printf("Superpoder: %.2f\n", superPoder2);
    printf("\n");

    //menu de escolha para comparação	
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Superpoder\n");
    printf("Digite o número correspondente à sua escolha: \n");
    scanf("%d", &opcao1);

    switch(opcao1){
	case 1:
		printf("Você escolheu o atributo População\n");
		atributo1Carta1 = populacao1;
		atributo1Carta2 = populacao2;
	break;
	case 2:
		printf("Você escolheu o atributo Área\n");
		atributo1Carta1 = area1;
		atributo1Carta2 = area2;
	break;
	case 3:
		printf("Você escolheu o atributo PIB\n");
		atributo1Carta1 = pib1;
		atributo1Carta2 = pib2;
	break;
	case 4:
		printf("Você escolheu o atributo Número de pontos turísticos\n");
		atributo1Carta1 = qtd_ponto_turistico1;
		atributo1Carta2 = qtd_ponto_turistico2;
	break;
	case 5:
		printf("Você escolheu o atributo Densidade populacional\n");
		atributo1Carta1 = (1/dens_populacional1);
		atributo1Carta2 = (1/dens_populacional2);
	break;
	case 6:
		printf("Você escolheu o atributo PIB per capita\n");
		atributo1Carta1 = pib_per_capita1;
		atributo1Carta2 = pib_per_capita2;
	break;
	case 7:
		printf("Você escolheu o atributo Superpoder\n");
		atributo1Carta1 = superPoder1;
		atributo1Carta2 = superPoder2;
	break;
	default:
		printf("Opção inválida!");
    }

    //menu de escolha para comparação	
    printf("Escolha o segundo atributo para comparação:\n");
    printf("Você não pode escolher o mesmo atributo duas vezes!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Superpoder\n");
    printf("Digite o número correspondente à sua escolha: \n");
    scanf("%d", &opcao2);

    if(opcao1 == opcao2){
	printf("Você não pode escolher o mesmo atributo");
    }else{
	switch(opcao2){
		case 1:
		printf("Você escolheu o atributo População\n");
		atributo2Carta1 = populacao1;
		atributo2Carta2 = populacao2;
	break;
	case 2:
		printf("Você escolheu o atributo Área\n");
		atributo2Carta1 = area1;
		atributo2Carta2 = area2;
	break;
	case 3:
		printf("Você escolheu o atributo PIB\n");
		atributo2Carta1 = pib1;
		atributo2Carta2 = pib2;
	break;
	case 4:
		printf("Você escolheu o atributo Número de pontos turísticos\n");
		atributo2Carta1 = qtd_ponto_turistico1;
		atributo2Carta2 = qtd_ponto_turistico2;
	break;
	case 5:
		printf("Você escolheu o atributo Densidade populacional\n");
		atributo2Carta1 = (1/dens_populacional1);
		atributo2Carta2 = (1/dens_populacional2);
	break;
	case 6:
		printf("Você escolheu o atributo PIB per capita\n");
		atributo2Carta1 = pib_per_capita1;
		atributo2Carta2 = pib_per_capita2;
	break;
	case 7:
		printf("Você escolheu o atributo Superpoder\n");
		atributo2Carta1 = superPoder1;
		atributo2Carta2 = superPoder2;
	break;
	default:
		printf("Opção inválida!");
	break;
	}
    soma1 = (atributo1Carta1 + atributo2Carta1);
    soma2 = (atributo1Carta2 + atributo2Carta2);
    printf("\n");
    printf("Comparando as cartas...\n");
	if(soma1 > soma2){
        printf("Carta 1: %s - soma de pontos: %.2f\n", cidade1, soma1);
        printf("Carta 2: %s - soma de pontos: %.2f\n", cidade2, soma2);
		printf("Carta 1 venceu!");
	}else if(soma1 < soma2){
        printf("Carta 1: %s - soma de pontos: %.2f\n", cidade1, soma1);
        printf("Carta 2: %s - soma de pontos: %.2f\n", cidade2, soma2);
		printf("Carta 2 venceu!");
	}else{
        printf("Carta 1: %s - soma de pontos: %.2f\n", cidade1, soma1);
        printf("Carta 2: %s - soma de pontos: %.2f\n", cidade2, soma2);
		printf("As cartas empataram!");
	}
    }

    /*Carta 1:
Nome: Amazonas
Código: A01
Cidade: Manaus
População: 2063689
Área: 11278893.00 km²
PIB: 127.60 bilhões de reais
Número de pontos turísticos: 20
Densidade populacional: 0.18 hab/km²
PIB per capita: 61831.02 reais
Superpoder: 13342735.00

Nome: Ceara
Código: A02
Cidade: Fortaleza
População: 2428708
Área: 312353.00 km²
PIB: 86.93 bilhões de reais
Número de pontos turísticos: 15
Densidade populacional: 7.78 hab/km²
PIB per capita: 35792.69 reais
Superpoder: 2741163.25
*/
}   
