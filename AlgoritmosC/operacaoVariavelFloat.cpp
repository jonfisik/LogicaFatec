#include<stdio.h>  // Biblioteca de entrada e sa�da de dados. Biblioteca padr�o do C (express�o inglesa standard input-output header - "cabe�alho padr�o de entrada/sa�da")
// Jonatan Paschoal - Declara��o e opera��es com de var�veis REAIS 06/04/2021

// Corpo do programa - delimita inicio e fim do programa
main(){
	float raio, area; // Vari�vel float
	char nome[10]; // caracter - aceita cadeia de caracteres
		
	 printf("Digite seu nome: "); //Exibe uma msg na tela
	 scanf("%s", &nome); // Recebe o que foi digitado
	 printf("Digite a medida do raio em metros: ");
	 scanf("%f", &raio);
	 	 
	 area = (3.1415)*(raio*raio);
	 
	 
	 printf("\n");
	 printf(">> %s, a area da circunferencia com raio %f metro(s) eh %f.\n", nome, raio, area);
	 
}
