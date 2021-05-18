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
// Função
void traco(void);
void tracoSimples(void);
//Declaração de variáveis
int i;
int x;
int soma = 0;
//Principal
main(){
//setlocale(LC_ALL,"Portuguese");
	setlocale(LC_ALL,"Portuguese");
//Título	
	printf("\nSequência 10 valores V1.0.0\n");
	traco();
	
	for(i = 0; i <= 10; i++){
		if(i % 2 == 0){
			x = i*(-1);
		}else{
			x = i;
		}
		printf("-");
		printf("[%i]", x);
		printf("-");
	}
	printf("\n");
	tracoSimples();
	system("pause");
}
// definição das funções
void traco(void){
	printf("====================================\n");
}
void tracoSimples(void){
	printf("____________________________________\n");
}
