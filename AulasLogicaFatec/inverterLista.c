#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
#include <conio.h>

/* Inverter Lista
 * Autor: JPaschoal
 * versao: 1.0.0
 * email: jonfisik@hotmail.com
 * status: Professor - fisica
 * data: 07/06/2021
 */

// Area de declaração
void traco(void);
void tracoSimples(void);


// principal
int main(){
int i;
float X[13], Y[13];
int cont = 0;
	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
		
	printf("\nInverter Lista\n");
	traco();
	//leitura dos elementos
	for(i=0; i<=6; i++){
		printf("Digite o %iº valor da lista >>> ",i+1);
		scanf("%f", &X[i]);
		printf("\n");
	}
	// Processo de inversão
	for(i=0; i<=6; i++){
		Y[12-i] = X[i];
	}
	printf("Listas");
	traco();
	// Exibindo as listas
	for(i=0; i<=6; i++){
		printf("\n X[%i] = %0.1f \t \t Y[%i] = %0.1f\n", i+1, X[i], i+1, Y[i]);
	}
	
	
		

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



