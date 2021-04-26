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
	int nivel, cargah, valor;
	float salario;
	// menu e entrado de dados
	printf("Escolha uma das opcoes abaixo\n\n");
	printf("Nivel [1] hora aula ate R$ 12.00\n");
	printf("Nivel [2] hora aula R$ 17.00 a R$ 25\n");
	printf(">> ");
	scanf("%i", &nivel);
	
	printf("\nDigite sua carga horaria >> ");
	scanf("%i", &cargah);
	
	if(nivel == 1){
		salario = cargah * 12;
		printf("Seu salario eh - R$ %0.2f", salario);
	}else{
		printf("Digite o valor da hora aula [17/25] >> ");
		scanf("%i", &valor);
		if(valor == 17){
			salario = cargah * 17;
			printf("Seu salario eh - R$ %0.2f", salario);
		}else{
			salario = cargah * 25;
			printf("Seu salario eh - R$ %0.2f", salario);
		}
	}
}
