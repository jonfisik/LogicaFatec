#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas

/* Triângulo
 * Autor: JPaschoal
 * versao: 1.0.0
 * email: jonfisik@hotmail.com
 * status: Professor - fisica
 * data: 03/05/2021
 */

// Area de declaração
float ladoA;
float ladoB;
float ladoC;

void traco(void);
void tracoSimples(void);

// principal
int main(){
	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
	//float ladoA, ladoB, ladoC;
	
	printf("\nCLASSIFICAÇÃO DE TRIÂNGULO\n");
	traco();
	printf("Digite a medida do lado A: ");
	scanf("%f", &ladoA);
	printf("Digite a medida do lado B: ");
	scanf("%f", &ladoB);
	printf("Digite a medida do lado C: ");
	scanf("%f", &ladoC);
	tracoSimples();
		
	if(ladoA == ladoB && ladoB == ladoC){
		printf("\nMedida dos lados.\n");
		printf("Lado A - %0.1f\n", ladoA);
		printf("Lado B - %0.1f\n", ladoB);
		printf("Lado C - %0.1f\n", ladoC);
		printf("Triângulo EQUILÁTERO\n");
	}else if(ladoA == ladoB || ladoB == ladoC || ladoA == ladoC){
		printf("\nMedida dos lados.\n");
		printf("Lado A - %0.1f\n", ladoA);
		printf("Lado B - %0.1f\n", ladoB);
		printf("Lado C - %0.1f\n", ladoC);
		printf("Triângulo ISÓSCELES\n");
	}else{
		printf("\nMedida dos lados.\n");
		printf("Lado A - %0.1f\n", ladoA);
		printf("Lado B - %0.1f\n", ladoB);
		printf("Lado C - %0.1f\n", ladoC);
		printf("Triângulo ESCALENO\n");
		}

	tracoSimples();
	
	system("pause");
	
	
	
}

// definição das funções
void traco(void){
	printf("==================================\n");
}

void tracoSimples(void){
	printf("__________________________________\n");
}
