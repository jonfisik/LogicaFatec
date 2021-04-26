/*
Autor: Jonatan P. Paschoal
versao: 1.0.0
email: jonfisik@hotmail.com
status: Professor - fisica
data: 26/04/2021
*/
#include <stdio.h>
#include <stdlib.h>

main(){
	// Variaveis
	char sexo;
	// menu e entrado de dados
	printf("Digite seu sexo [M/F] ");
	scanf("%c", &sexo);
	printf("\n");
	
	sexo = toupper(sexo);
	
	if(sexo == 'M' || sexo == 'F'){
		printf(" >> Sexo valido. <<");
	}else{
		printf(" >> Sexo invalido. <<");
	}
}
