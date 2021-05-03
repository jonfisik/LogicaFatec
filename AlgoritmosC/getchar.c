#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
// Jonatan Paschoal - 13/04/2021

main(){
	printf("Digite o valor '1': ");
	// variavel do tipo caracter.
	char c;	
	// funcao da biblioteca ctype, que atribui valores direto variavel sem necessidade da funcao scanf.
	c = getchar();

	if(c == '1'){
		printf("\nO >> %c << caracter esta correto.\n", c);
	}else{
		printf("\nO valor digitado >> %c << eh invalido.\n", c);
	}
}

