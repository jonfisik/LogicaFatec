#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
/* M�dia de 10 valores
 * Autor: JPaschoal
 * versao: 1.0.0
 * email: jonfisik@hotmail.com
 * status: Professor - f�sica
 * data: 17/05/2021
 */
// Fun��o
void traco(void);
void tracoSimples(void);
//Declara��o de vari�veis
int i;
int x;
int atual;
//Principal
main(){
//setlocale(LC_ALL,"Portuguese");
	setlocale(LC_ALL,"Portuguese");
//T�tulo	
	printf("\nMaior valor de 10 V1.0.0\n");
	traco();
	
	for(i=1; i<=10; i++){
		printf("\nDigite o %i� valor >> ", i);
		scanf("%d", &x);
		tracoSimples();
		
		if(atual < x){
			atual = x;
			printf("\n%i � maior ou igual a %i.\n", x, atual);
		}else{
			atual = atual;
			printf("\n%i � maior ou igual a %i.\n", atual, x);
		}
	}
	printf("\nO maior valor digitado foi >> %i.\n", atual);
	tracoSimples();
	system("pause");
}
// defini��o das fun��es
void traco(void){
	printf("==================================\n");
}
void tracoSimples(void){
	printf("__________________________________\n");
}
