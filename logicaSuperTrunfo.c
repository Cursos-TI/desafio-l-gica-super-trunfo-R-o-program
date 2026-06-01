#include <stdio.h>

int main(){
    //declaração de variáveis
    int opcao;
    char estado1[20], estado2[20];
    char codigo1[3], codigo2[3];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2; //%lu para leitura e exibição de unsigned long int
    float area1, area2;
    float pib1, pib2;
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

    //menu de escolha para comparação	
    printf("Escolha um dos atributos para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Superpoder\n");
    printf("Digite o número correspondente à sua escolha: \n");
    scanf("%d", &opcao);

    switch(opcao){
	case 1:
		printf("\nComparação de cartas (Atributo: População):\n");
    		printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, populacao1);
    		printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, populacao2);
    		if(populacao1 > populacao2){
			printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    		}else if(populacao1 < populacao2){
			printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    		}else{
			printf("As cartas empataram!");
		    }
	break;
	case 2:
		printf("\nComparação de cartas (Atributo: Área):\n");
    		printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, area1);
    		printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, area2);
    		if(area1 > area2){
			printf("Resultado: Carta 1 (%s) venceu!\n",	cidade1);
    		}else if(area1 < area2){
			printf("Resultado: Carta 2 (%s) venceu!\n",	cidade2);
    		}else{
			printf("As cartas empataram!");
		    }
	break;
	case 3:
		printf("\nComparação de cartas (Atributo: PIB):\n");
    		printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib1);
    		printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pib2);
    		if(pib1 > pib2){
			printf("Resultado: Carta 1 (%s) venceu!\n",	cidade1);
    		}else if(pib1 < pib2){
			printf("Resultado: Carta 2 (%s) venceu!\n",	cidade2);
    		}else{
			printf("As cartas empataram!");
		    }
	break;
	case 4:
		printf("\nComparação de cartas (Atributo: Número de pontos turísticos):\n");
    		printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, qtd_ponto_turistico1);
    		printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, qtd_ponto_turistico2);
    		if(qtd_ponto_turistico1 > qtd_ponto_turistico2){
			printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    		}else if(qtd_ponto_turistico1 < qtd_ponto_turistico2){
			printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    		}else{
			printf("As cartas empataram!");
		    }
	break;
	case 5:
		printf("\nComparação de cartas (Atributo: Densidade populacional):\n");
    		printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, dens_populacional1);
    		printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, dens_populacional2);
    		if(dens_populacional1 < dens_populacional2){
			printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    		}else if(dens_populacional1 > dens_populacional2){
			printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    		}else{
			printf("As cartas empataram!");
		    }
	break;
	case 6:
		printf("\nComparação de cartas (Atributo: PIB per capita):\n");
    		printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib_per_capita1);
    		printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, pib_per_capita2);
    		if(pib_per_capita1 > pib_per_capita2){
			printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    		}else if(pib_per_capita1 < pib_per_capita2){
			printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    		}else{
			printf("As cartas empataram!");
		    }
	break;
	case 7:
		printf("\nComparação de cartas (Atributo: Superpoder):\n");
    		printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, superPoder1);
    		printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, superPoder2);
    		if(superPoder1 > superPoder2){
			printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    		}else if(superPoder1 < superPoder2){
			printf("Resultado: Carta 2 (%s) venceu!\n", 		cidade2);
    		}else{
			printf("As cartas empataram!");
		    }
	break;
	default:
		printf("Opção inválida!");
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
