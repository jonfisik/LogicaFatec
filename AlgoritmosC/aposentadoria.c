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
	int ano, ingresso, ano_atual, tempo_servico;
	int idade  = 0;
	
	// menu e entrado de dados
	printf("==========APOSENTADORIA==========\n");
	printf("Dados\n");
	
	printf("Ano de nascimento - \"aaaa\": ");
	scanf("%d", &ano);
	
	printf("Ano de ingresso - \"aaaa\": ");
	scanf("%d", &ingresso);
	
	printf("Ano atual - \"aaaa\": ");
	scanf("%d", &ano_atual);

	printf("\n");
	
	idade = ano_atual - ano;
	tempo_servico = ano_atual - ingresso;
	
	if((idade >= 65 || tempo_servico >= 35) || (idade >= 60 && tempo_servico > 20)){
		printf(" >> Requer aposentadoria\n");
	}else{
		printf(" >> Nao requer aposentadoria\n");
	}
	
	printf(" - idade: %d\n", idade);
	printf(" - tempo de servico: %d\n", tempo_servico);
}
