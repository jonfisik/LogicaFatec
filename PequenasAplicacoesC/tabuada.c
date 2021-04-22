#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// Jonatan Paschoal - 22/04/2021

int main()
{
    int term = 0;
    int tabuada = 0;
    int x = 0;
    printf("=x=x=x=x=x=x=x=x= TABUADA =x=x=x=x=x=x=x=x=x=x=");
    printf("\nDigite a tabuada que deseja calcular >>> ");
    scanf("%i", &tabuada);
    printf("Escolha onde terminara: ");
    scanf("%d", &term);
    for(x = 1; x <= term; ++x){
        printf("\t%i x %i = %i \n", x, tabuada, x*tabuada);

    }

    printf("=x=x=x=x=x=x=x=x=X=X FIM X=X=x=x=x=x=x=x=x=x=x=");
    return 0;
}
