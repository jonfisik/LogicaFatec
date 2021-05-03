#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
// Jonatan Paschoal 12/04/2021

/*
faca{
	bloco de instrucao
}enquanto(true);
*/

main(){
	int contador = 0;
	char c;
	do{
		printf("Digite \"0\" para sair do loop. \n");
		printf("%i quantidade de vezes.\n", contador);
		c = getchar();
		contador += 1;
		printf("===================================\n");
	}while(c!='0'); // != diferente.
}
