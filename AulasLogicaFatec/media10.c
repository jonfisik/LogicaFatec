#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
/* M�dia de 10 valores
 * Autor: JPaschoal
 * versao: 1.0.0
 * email: jonfisik@hotmail.com
 * status: Professor - fisica
 * data: 17/05/2021
 */
// Fun��o
void traco(void);
void tracoSimples(void);
//Declara��o de vari�veis
int i;
int x;
float soma = 0;
float media;
//Principal
main(){
//setlocale(LC_ALL,"Portuguese");
	setlocale(LC_ALL,"Portuguese");
//T�tulo	
	printf("\nM�dia 10 valores V1.0.0\n");
	traco();
	
	for(i=1; i<=10; i++){
		printf("\nDigite o %i� valor >> ", i);
		scanf("%d", &x);
		soma = soma + x;
		if(i<10){
			media = (soma/i);
			printf("M�dia parcial >>> %0.2f\n", media);
		}else{
			media = (soma/10);
			printf("M�dia Final [%0.2f]\n", media);
		}
	}
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
