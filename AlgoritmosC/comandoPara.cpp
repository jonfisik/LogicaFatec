#include <stdio.h>
#include <stdlib.h>
// Jonatan Paschoal - 20/04/2021
/*
for(parte 1; parte 2;parte 3){
	parte 1 - declara��o e inicializa��o da vari�vel
	parte 2 - condi��o l�gica
	parte 3 - incremento da vari�vel
}
*/
int main()
{
	int i, a, b;
    printf("\n========== ==========\n");
    for(i = 0; i < 10; ++i){
        printf("%i \n", i);
    }
    printf("\n");
    for(a = 0, b = 30; a <= 30; a++, b--){
        printf("%i", a);
        printf(" - ");
        printf("%i\n", b);
    }

    printf("\n========== ==========\n");
    return 0;
}
