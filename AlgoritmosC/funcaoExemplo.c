#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
/*
Autor: Jonatan P. Paschoal
versao: 1.0.0
email: jonfisik@hotmail.com
status: Professor - fisica
data: 28/04/2021
*/

// Area de declara��o
void traco(void);

// principal
int main(){
	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
	traco();
	printf("\tExemplo de fun��o\n");
	printf("\tJonatan P. Paschoal\n");
	traco();
}

// defini��o das fun��es
void traco(void){
	printf("==================================\n");
}
