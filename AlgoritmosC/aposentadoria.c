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
	
	ano_atual = 2021;
	// menu e entrado de dados
	printf("=========APOSENTADORIA=========\n");
	printf("Dados\n");
	
	printf("Ano de nascimento - \"aaaa\": ");
	scanf("%i", &ano);
	
	printf("Ano de ingresso - \"aaaa\": ");
	scanf("%i", &ingresso);
	
	printf("Ano atual - \"aaaa\": ");
	scanf("%i", &ano_atual);

	printf("\n");
	
	idade = ano_atual - ano;
	tempo_servico = ano_atual - ingresso;
	
	if((idade >= 65 || tempo_servico >= 35) || (idade >= 60 && tempo_servico > 20)){
		printf(" >> Requer aposentadoria");
	}else{
		printf(" >> Nao requer aposentadoria");
	}
	
	printf(" - idade: %i.\n", &idade);
	printf(" - tempo de servico: %i.\n", &tempo_servico);
}
