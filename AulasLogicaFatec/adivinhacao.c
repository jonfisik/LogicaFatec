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
int ch;
ch = 0;
int cont = 0;
	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
		
	printf("\nWhile da advinhação\n");
	traco();
	printf("\nAdivinhe a letra.\n");
	printf("Use maiúsculo ou minúsculo.\n");
	
	while(ch != 'A'){
		printf("\n>>> ");
		ch = getche();
		cont += 1;
	}
	printf("\n");
	
	if(cont < 5){
		printf("\nAcertou mizerávi!!!!\n");
	}else{
		printf("\n%i Tentativas?\n", cont);
		printf("Você é lazarento heim!!!!\n");
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



