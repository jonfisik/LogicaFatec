#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
#include <time.h>
/* Jongo das cartas
 * Autor: JPaschoal
 * versao: 1.0.0
 * email: jonfisik@hotmail.com
 * status: Professor - fisica
 * data: 03/05/2021
 */

// Area de declaração
void traco(void);
void tracoSimples(void);

// principal
int main(){
	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
	
	printf("\nJOGO DAS CARTAS\n");
	traco();
	
	srand(time(NULL));
	char face[13] = {'A','2','3','4','5','6','7','8','9','X','J','Q','K'};
	// char nome[quantidade_strings][quantidade_max_caracteres]
	char nipes[4][8] = {"Espadas","Paus","Copas","Ouro"};
	
	printf("%c de %s\n", face[rand()%13], nipes[rand()%4]);
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
