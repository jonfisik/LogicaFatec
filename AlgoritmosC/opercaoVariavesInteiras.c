#include<stdio.h>  // Biblioteca de entrada e sa�da de dados. Biblioteca padr�o do C (express�o inglesa standard input-output header - "cabe�alho padr�o de entrada/sa�da")
// Jonatan Paschoal - Declara��o e opera��es com de var�veis inteiras 06/04/2021

// Corpo do programa - delimita inicio e fim do programa
main(){
	int A, B, soma; // Vari�vel inteira
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
