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
int atual;
//Principal
main(){
//setlocale(LC_ALL,"Portuguese");
	setlocale(LC_ALL,"Portuguese");
//Título	
	printf("\nMaior valor de 10 V1.0.0\n");
	traco();
	
	for(i=1; i<=10; i++){
		printf("\nDigite o %iº valor >> ", i);
		scanf("%d", &x);
		tracoSimples();
		
		if(atual < x){
			atual = x;
			printf("\n%i é maior ou igual a %i.\n", x, atual);
		}else{
			atual = atual;
			printf("\n%i é maior ou igual a %i.\n", atual, x);
		}
	}
	printf("\nO maior valor digitado foi >> %i.\n", atual);
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
