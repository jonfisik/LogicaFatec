#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
#include <conio.h>

/* Concatenado Listas
 * Autor: JPaschoal
 * versao: 1.0.0
 * email: jonfisik@hotmail.com
 * status: Professor - fisica
 * data: 06/06/2021
 */

// Area de declaração
void traco(void);
void tracoSimples(void);


// principal
int main(){

int i;
int A[15], B[15], C[30];

	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
	printf("\nListas Concatenadas V1.0.0\n");
	traco();
	//Lista A
	for(i=0; i<=12; i++){
		printf("\nDigite o %iº da lista A >>> ",i+1);
		scanf("%i", &A[i]);
	}
	printf("\n");
	tracoSimples();
	// Mostrar lista A
	printf("\nLista A = { ");
	for(i=0; i<=12; i++){
		printf("%i ",A[i]);
	}
	printf("}\n");
	
	tracoSimples();
	//Lista B
	for(i=0; i<=14; i++){
		printf("\nDigite o %iº da lista B >>> ",i+1);
		scanf("%i", &B[i]);
	}
	printf("\n");
	tracoSimples();
	// Mostrar lista A
	printf("\nLista B = { ");
	for(i=0; i<=14; i++){
		printf("%i ",B[i]);
	}
	printf("}\n");
	
	for(i=0; i<=28; i++){
		if(i<=12){
			C[i] = A[i];
		}else{
			C[i] = B[i-13];
		}
	}
	
	tracoSimples();
	printf("\nLista C = { ");
	for(i=0; i<28; i++){
		printf("%i ",C[i]);
	}
	printf("}\n\n");
	
	traco();
	
	
	
	system("pause");
	
}

// definição das funções
void traco(void){
	printf("==================================\n");
}

void tracoSimples(void){
	printf("__________________________________\n");
}




