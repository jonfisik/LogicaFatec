#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
#include <conio.h>

/* Adivinhe a letra
 * Autor: JPaschoal
 * versao: 1.0.0
 * email: jonfisik@hotmail.com
 * status: Professor - fisica
 * data: 24/05/2021
 */

// Area de declaração
void traco(void);
void tracoSimples(void);


// principal
int main(){
int ch1, ch2;

int cont = 0;
	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
		
	printf("\nWhile\n");
	traco();
	printf("\nDigite duas vezes.");
		
	while(ch1 != ch2){
		printf("\nValor 1 >>> ");
		scanf("%i", &ch1);
		printf("\nValor 2>>> ");
		scanf("%i", &ch2);
			
		cont += 1;
	}
	printf("\n");
	
	printf("Total tentativas - %i.\n",cont);
	

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




