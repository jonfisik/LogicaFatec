#include<stdio.h>
// Jonatan Paschoal 14/04/2021 - desvio condicinal encadeado. Numeros positivos, negativos ou nulos;


main(){
	float numero;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	if(numero == 0){
		printf("[ %0.2f ] - NULO.", numero);
	}else{
		if(numero > 0){
			printf("[ + %0.2f ] - POSITIVO.", numero);
		}else{
			printf("[ - %0.2f ] - NEGATIVO.", numero);
		}
	}
	
}
