#include<stdio.h>
#include<stdlib.h>
// Jonatan Paschoal - 22/04/2021 - precedencia e associatividade de operadores

main(){
	int i, x, y;
	x = 10;
	y = 50;
	i = 10 + (10 + 50);
	printf("%i + (%i + %i) = %i.\n", x, x, y, i);
	printf("\n");
	/* == Associação da esquerda para a direta ==
		1) ()
		2) *, /, %
		3) +, -
		4) <, <=, >, >=
		5) =, == 
		== Associação da direta para a esquerda ==
		1) ++, --
		2) =, +=, -=, *=, /=, %=
	*/
	int a, b, c;
	a = (b=(c=1));
	printf("a = %i\n", a);
	printf("b = %i\n", b);
	printf("c = %i\n", c);
}
