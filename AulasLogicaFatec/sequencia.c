#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
/* Sequ�ncia
 * Autor: JPaschoal
 * versao: 1.0.0
 * email: jonfisik@hotmail.com
 * status: Professor - fisica
 * data: 18/05/2021
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
	printf("\nSequ�ncia 10 valores V1.0.0\n");
	traco();
	
	for(i = 0; i <= 10; i++){
		if(i % 2 == 0){
			x = i*(-1);
		}else{
			x = i;
		}
		
		printf(" %i ", x);
		
	}
	printf("\n");
	tracoSimples();
	system("pause");
}
// defini��o das fun��es
void traco(void){
	printf("=======================================\n");
}
void tracoSimples(void){
	printf("_______________________________________\n");
}
