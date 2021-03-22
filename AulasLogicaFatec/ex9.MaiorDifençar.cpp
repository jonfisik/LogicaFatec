#include<stdio.h>

main()
{
	int A, B, C, D;
	printf("Digite o valor de A: ");
	scanf("%i", &A);
	
	printf("Digite o valor de B: ");
	scanf("%i", &B);
	printf("\n");
	//-------------------------------
	C=A-B;
	D=B-A;
	//-------------------------------
	if(A>B)
	{
		printf("A diferenca entre A e B eh %i.", C);
	}
	else
	{
		printf("A diferenca entre B e A eh %i.", D);
	}
}
