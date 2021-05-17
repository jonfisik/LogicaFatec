#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
/* Média de 10 valores
 * Autor: JPaschoal
 * versao: 1.0.0
 * email: jonfisik@hotmail.com
 * status: Professor - fisica
 * data: 17/05/2021
 */
// Função
void traco(void);
void tracoSimples(void);
//Declaração de variáveis
int i;
int x;
float soma = 0;
float media;
//Principal
main(){
//setlocale(LC_ALL,"Portuguese");
	setlocale(LC_ALL,"Portuguese");
//Título	
	printf("\nMédia 10 valores V1.0.0\n");
	traco();
	
	for(i=1; i<=10; i++){
		printf("\nDigite o %iº valor >> ", i);
		scanf("%d", &x);
		soma = soma + x;
		if(i<10){
			media = (soma/i);
			printf("Média parcial >>> %0.2f\n", media);
		}else{
			media = (soma/10);
			printf("Média Final [%0.2f]\n", media);
		}
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
