// Aula de l�gica de programa��o - fatec itaquera - Jonatan Paschoal 08-03-2021
#include<stdio.h>

main()
{
	int v,
		suc,
		ant; //declarando vari�vel
	printf("digite uma valor: ");
	scanf("%i", &v);
	suc = v + 1;
	ant = v - 1;
	printf("O valor do sucessor e >> %i << e do antecessor >> %i <<", suc, ant);
}
