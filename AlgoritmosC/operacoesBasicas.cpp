#include <stdio.h>
#include <stdlib.h>
// Jonatan Paschoal 07/04/2021

int main(){
	
    printf("==============================\n");
    int x = 100;
    printf( "%i \n", x);

    float y = 5.5;
    printf( "%f \n", y);

    printf("%i e %f \n", x,  y);
    printf("%i - %f = %f\n.", x, y, x-y);
    printf("==============================\n");

    int num1, num2, soma, dif, mult, div;
    num1 = 20;
    num2 = 30;
    printf("Sejam os numeros %i e %i.\n", num1, num2);
    soma = num1+num2;
    dif = num2 - num1;
    printf("A soma eh: %i\n", soma);
    printf("A diferenca eh: %i\n", dif);

    mult = num1*num2;
    printf("O produto sera: %i\n", mult);

    div = num1/2;
    printf("O quociente sera: %i\n", div);
    printf("==============================");
}
