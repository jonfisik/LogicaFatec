#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
/*
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
//Principal
main(){
//setlocale(LC_ALL,"Portuguese");
	setlocale(LC_ALL,"Portuguese");
//T�tulo	
	printf("\nM�ltiplos de 3 e 5 at� 100 V1.0.0\n");
	traco();
	
	for(i=1; i<100; i++){
		if(i % 3 == 0 && i % 5 == 0){
			printf(">> %i\n", i);
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
