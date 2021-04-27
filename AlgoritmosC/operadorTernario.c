#include <stdio.h>
#include <stdlib.h>
/*
Autor: Jonatan P. Paschoal
versao: 1.0.0
email: jonfisik@hotmail.com
status: Professor - fisica
data: 27/04/2021
*/
int main()
{
	
    int num1, num2;
    printf("===========TERNARIO===========\n");

    printf("\nInforme um numero: ");
        scanf("%d", &num1);

    printf("==============================\n");

        if(num1<0)
            num2 = 0;
        else
            num2 = num1;

        printf("\nO valor de num2 eh: %d. \n", num2);

    printf("==============================\n");
	// expressao ? valorTrue : valorFalse;
	// <variavel> = (condicao) ? <valor1> : <valor2>;
	// <variavel> = (True) ? <valor1> senao <valor2>;
    num2 = (num1<0)? 0 : num1;

        printf("\nO valor de num2 eh: %d. \n", num2);

    printf("==============================\n");

    return 0;
}
