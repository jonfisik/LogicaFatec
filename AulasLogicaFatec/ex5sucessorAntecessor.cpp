// Aula de lógica de programação - fatec itaquera - Jonatan Paschoal 08-03-2021
#include<stdio.h>

main()
{
	int v,
		suc,
		ant; //declarando variável
	printf("digite uma valor: ");
	scanf("%i", &v);
	suc = v + 1;
	ant = v - 1;
	printf("O valor do sucessor e >> %i << e do antecessor >> %i <<", suc, ant);
}
