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
char cor;
float distancia;

void traco(void);
void tracoSimples(void);

// principal
int main(){
	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
	//float ladoA, ladoB, ladoC;
	
	printf("\nSemáfaro\n");
	traco();
	
	printf("[V] Vermelho\n");
	printf("[A] Amarelo\n");
	printf("[D] Verde\n");
	printf("Qual a cor do semáfaro? ");
	scanf("%c", &cor);
	printf("Distância: ");
	scanf("%f", &distancia);
	tracoSimples();
	
	cor = toupper(cor);
	
	if(cor == 'V'){
		printf("\nPARAR\n");
	}else if(cor == 'A' && distancia <= 5){
		printf("\nCUIDADO!!!!\n");
	}else{
		printf("\nPODE PASSAR\n");
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


