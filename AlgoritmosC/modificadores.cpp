#include<stdio.h>
// Jonatan Pantoja Paschoal 09/04/2021

/*
signed - números com sinal (positivos e negativos)
unsigned - números sem sinais
long - aumentar a capacidade de armazenamento
short - diminuir a capacidade de armazenamento
*/
main(){
	int i=10;
	unsigned short int u;
	double j;
	printf("Variavel -unsigned short int- %i bytes de memoria.\n", sizeof(u)); //Tamanho da variável
	printf("Variavel normal- %i bytes de memoria.\n", sizeof(i));
	printf("Variavel double- %i bytes de memoria.\n", sizeof(j));
}
