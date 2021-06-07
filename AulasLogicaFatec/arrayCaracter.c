#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
#include <conio.h>

/* Array caracter
 * Autor: JPaschoal
 * versao: 1.0.0
 * email: jonfisik@hotmail.com
 * status: Professor - fisica
 * data: 07/06/2021
 */

// Area de declaração
void traco(void);
void tracoSimples(void);

#define NUM_NOMES 5    /*Define a quantidade de nomes no array*/
#define TAM 	  20   /*Define o tamanho máximo do nome*/

// principal
int main(){

	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
		
	printf("\nArray \n");
	traco();
	printf("\n");
	char nome[20];
	char nomes[NUM_NOMES][TAM] = {"Maria José",
								 "José Maria",
								 "Judas",
								 "Pedro",
								 "Tiago"};
	int i, comprimento;
	for(i=0; i<5; i+=1){
		printf("%s\n", nomes[i]);
	}
	
	tracoSimples();
	printf("\n");
	
	printf("Digite seu nome: ");
	gets(nome);
	comprimento = strlen(nome);
	printf("Seu nome tem %d caracteres.\n", comprimento);
	
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



