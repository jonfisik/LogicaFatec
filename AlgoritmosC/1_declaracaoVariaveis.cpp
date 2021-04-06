#include<stdio.h>  // Biblioteca de entrada e saída de dados. Biblioteca padrão do C (expressão inglesa standard input-output header - "cabeçalho padrão de entrada/saída")
// Jonatan Paschoal - Declaração de varáveis 06/04/2021

// Corpo do programa - delimita inicio e fim do programa
main(){
	int A; // Variável inteira
	float B; //Variável real, número quebrado
	char nome[10]; // caracter - aceita cadeia de caracteres
	bool V, F; // Variável bolleana - apenas verdadeiro ou falso 
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
