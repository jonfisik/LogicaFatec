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

// Area de declara��o
void traco(void);
void tracoSimples(void);


// principal
int main(){
int ch;
ch = 0;
int cont = 0;
	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
		
	printf("\nWhile da advinha��o\n");
	traco();
	printf("\nAdivinhe a letra.\n");
	printf("Use mai�sculo ou min�sculo.\n");
	
	while(ch != 'A'){
		printf("\n>>> ");
		ch = getche();
		cont += 1;
	}
	printf("\n");
	
	if(cont < 5){
		printf("\nAcertou mizer�vi!!!!\n");
	}else{
		printf("\n%i Tentativas?\n", cont);
		printf("Voc� � lazarento heim!!!!\n");
	}
	
		

	tracoSimples();
	
	system("pause");
	
	
	
}

// defini��o das fun��es
void traco(void){
	printf("==================================\n");
}

void tracoSimples(void){
	printf("__________________________________\n");
}



