#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
/* Média de 10 valores
 * Autor: JPaschoal
 * versao: 1.0.0
 * email: jonfisik@hotmail.com
 * status: Professor - física
 * data: 17/05/2021
 */
// Função
void traco(void);
void tracoSimples(void);
//Declaração de variáveis
int i;
int x;
int atual, menor, maior;
//Principal
main(){
//setlocale(LC_ALL,"Portuguese");
	setlocale(LC_ALL,"Portuguese");
//Título	
	printf("\nMaior e menor valor de 10 - V1.0.0\n");
	traco();
	
	printf("\nDigite o 1º valor >> ");
	scanf("%d", &x);
	tracoSimples();
	maior = x;
	menor = x;

	for(i=1; i<5; i++){
		printf("\nDigite o %iº valor >> ", i+1);
		scanf("%d", &x);
		tracoSimples();
		
		if(x > maior){
			maior = x;
		}
		if(x < menor){
			menor = x;
			}	
		}
	printf("\nMaior valor digitado >> %i.\n", maior);
	printf("\nMenor valor digitado >> %i.\n", menor);
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
