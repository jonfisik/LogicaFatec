#include<stdio.h>  // Biblioteca de entrada e sa�da de dados. Biblioteca padr�o do C (express�o inglesa standard input-output header - "cabe�alho padr�o de entrada/sa�da")
// Jonatan Paschoal - Declara��o de var�veis 06/04/2021

// Corpo do programa - delimita inicio e fim do programa
main(){
	int A; // Vari�vel inteira
	float B; //Vari�vel real, n�mero quebrado
	char nome[10]; // caracter - aceita cadeia de caracteres
	bool V, F; // Vari�vel bolleana - apenas verdadeiro ou falso 
	V = true; // atribuindo o valor true
	F = false; // atribuindo o valor false
	
	 printf("Digite seu nome: "); //Exibe uma msg na tela
	 scanf("%s", &nome); // Recebe o que foi digitado
	 printf("Digite um numero positivo ou negativo: ");
	 scanf("%i", &A);
	 printf("Digite um numero quebrado: ");
	 scanf("%f", &B);
	 
	 
	 printf("\n");
	 printf(">> %s, o seu nome eh uma cadeia de caracter.\n", nome);
	 printf("O valor [%i], eh um inteiro.\n", A);
	 printf("O valor [%f], eh chamado de real.\n", B);
	 //printf("Os valores % e % sao valores booleanos.", V, F);
}
