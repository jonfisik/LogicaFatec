#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
/* Soma valores
 * Autor: JPaschoal
 * versao: 1.0.0
 * email: jonfisik@hotmail.com
 * status: Professor - fisica
 * data: 14/05/2021
 */
// Fun��o
void traco(void);
void tracoSimples(void);
//Declara��o de vari�veis
int i;
int x;
int soma = 0;
//Principal
main(){
//setlocale(LC_ALL,"Portuguese");
	setlocale(LC_ALL,"Portuguese");
//T�tulo	
	printf("\nSomando 10 valores V1.0.0\n");
	traco();
	
	for(i=1; i<=10; i++){
		printf("\nDigite o %i� valor >> ", i);
		scanf("%d", &x);
		soma = soma + x;
		if(i<10){
			printf("Resultado >>> %i\n", soma);
		}else{
			printf("Resultado Final [%i]\n", soma);
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
