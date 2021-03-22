#include<stdio.h>

main()
{
	int A, B;
	printf("Digite o valor de A: ");
	scanf("%i", &A);
	
	printf("Digite o valor de B: ");
	scanf("%i", &B);
	printf("\n");
	
	if(A>B)
	{
		printf("\nO maior valor eh A=%i.", A);
	}
	else
	{
		printf("\nO maior valor eh B=%i.", B);	
	}
}
