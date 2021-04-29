#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
/*
Autor: Jonatan P. Paschoal
versao: 1.0.0
email: jonfisik@hotmail.com
status: Professor - fisica
data: 29/04/2021
*/

// Area de declaração
// void usada em funcoes simples que nao retornam valores
void traco(void);
void tracoSimples(void);

int numero, valorMax;
int contador = 0;

// rotina principal
int main(){
	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
	traco();
	printf("\tTabuada V1.0.0\n");
	traco();
	printf("Digite o número da tabuada: ");
	scanf("%d", &numero);
	printf("Até quanto? ");
	scanf("%d", &valorMax);
	
	// A linha abaixo gera um laço infinito
	for(contador; contador <= valorMax; contador++){
		printf("%d x %d = %d\n", numero, valorMax, numero*contador);
	}
	tracoSimples();
	printf("\n");
	system("pause");
}

// definição das funções
void traco(void){
	printf("=======================================\n");
}

void tracoSimples(void){
	printf("---------------------------------------\n");
}
