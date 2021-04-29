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

// Area de declara��o
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
	printf("Digite o n�mero da tabuada: ");
	scanf("%d", &numero);
	printf("At� quanto? ");
	scanf("%d", &valorMax);
	
	// A linha abaixo gera um la�o infinito
	for(contador; contador <= valorMax; contador++){
		printf("%d x %d = %d\n", numero, valorMax, numero*contador);
	}
	tracoSimples();
	printf("\n");
	system("pause");
}

// defini��o das fun��es
void traco(void){
	printf("=======================================\n");
}

void tracoSimples(void){
	printf("---------------------------------------\n");
}
