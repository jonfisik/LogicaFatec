#include <stdio.h>
#include <stdlib.h>
// Jonatan Pantoja Paschoal - 09/04/2021

int main()
{
    int i  = 1;

    printf("\t==========\n");
    
	// testa a condi��o l�gica se � verdadeira e repete at� que se torne falsa
    while(i<=100){
        printf("\t%i\n", i);
        i = i+1;
    }
    printf("\t==========\n");
    return 0;
}
