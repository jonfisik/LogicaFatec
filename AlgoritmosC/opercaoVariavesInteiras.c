#include<stdio.h>  // Biblioteca de entrada e saída de dados. Biblioteca padrão do C (expressão inglesa standard input-output header - "cabeçalho padrão de entrada/saída")
// Jonatan Paschoal - Declaração e operações com de varáveis inteiras 06/04/2021

// Corpo do programa - delimita inicio e fim do programa
main(){
	int A, B, soma; // Variável inteira
	char nome[10]; // caracter - aceita cadeia de caracteres
		
	 printf("Digite seu nome: "); //Exibe uma msg na tela
	 scanf("%s", &nome); // Recebe o que foi digitado
	 printf("Digite um numero positivo ou negativo: ");
	 scanf("%i", &A);
	 printf("Digite um numero quebrado: ");
	 scanf("%i", &B);
	 
	 soma = A + B;
	 
	 printf("\n");
	 printf(">> %s, a soma de %i e %i eh %i.\n", nome, A, B, soma);
	 
}
