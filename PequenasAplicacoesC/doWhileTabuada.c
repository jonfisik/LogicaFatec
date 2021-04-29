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

int numero, valorMax, resposta;
int contador = 0;

// rotina principal
int main(){
	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
	
	// A linha abaixo gera um laço finito
	do{
		system("cls");
		traco();
		printf("\tTabuada V1.0.0\n");
		traco();

		printf("\n");
		printf("Digite o número da tabuada: ");
		scanf("%d", &numero);
		printf("Até quanto? ");
		scanf("%d", &valorMax);
		printf("\n");
		// A linha abaixo gera um laço finito
		for(contador=0; contador <= valorMax; contador++){
			printf("%d x %d = %d\n", numero, contador, numero*contador);
		}
		tracoSimples();
		printf("1 - Novo calculo\n");
		printf("2 - Sair\n");
		printf("\nDigite a opcao desejada: ");
		scanf("%d", &resposta);
		if(resposta < 1 || resposta > 2){
			printf("\nOpcao incorreta!\n");
			printf("Finalizando tabuada!!!\n\n");
			break;
		}
		printf("\n");
		tracoSimples();	
	}while(resposta != 2);
	
	//tracoSimples();
	system("pause");
}

// definição das funções
void traco(void){
	printf("=====================================\n");
}

void tracoSimples(void){
	printf("-------------------------------------\n");
}
