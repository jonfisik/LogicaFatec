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
int atual, menor, maior;
//Principal
main(){
//setlocale(LC_ALL,"Portuguese");
	setlocale(LC_ALL,"Portuguese");
//T�tulo	
	printf("\nMaior e menor valor de 10 - V1.0.0\n");
	traco();
	
	printf("\nDigite o 1� valor >> ");
	scanf("%d", &x);
	tracoSimples();
	maior = x;
	menor = x;

	for(i=1; i<5; i++){
		printf("\nDigite o %i� valor >> ", i+1);
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
// defini��o das fun��es
void traco(void){
	printf("==================================\n");
}
void tracoSimples(void){
	printf("__________________________________\n");
}
