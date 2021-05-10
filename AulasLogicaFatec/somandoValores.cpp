#include<stdio.h>
main(){
	int i;
	int x;
	int soma = 0;
	
	for(i=1; i<=10; i++){
		printf("\nDigite o %i valor >> ", i);
		scanf("%d", &x);
		soma = soma + x;
		printf("%i\n", soma);
	}
}
