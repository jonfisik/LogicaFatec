#include<stdio.h>

main()
{
	int x;
	printf("Digite um valor: ");
	scanf("%i", &x);
	
	printf("\n");	

	if(x>0)
	{
		printf("Voce digitou um numero POSITIVO.");
	}
	else
	{
		printf("Voce digitou um numero NEGATIVO.");
	}
}
