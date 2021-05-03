#include <stdio.h>
#include <stdlib.h>
//Jonatan Pantoja Paschoal - 16/04/2021
/*
switch(expressao){
    case(expressao-cte):
        break;
    case(expressao-cte):
        break;
default:
}
*/
int main()
{
    int i;
    printf("================================\n");
    printf("\nDigite um valor entre 0  e 9: ");
    scanf("%i", &i);

    switch(i){
    case 0:
        printf("A opcao digitada foi > %i <.\n", i);
        break;
    case 1:
        printf("A opcao digitada foi > %i <.\n", i);
        break;
    case 2:
        printf("A opcao digitada foi > %i <.\n", i);
        break;
    case 3:
        printf("A opcao digitada foi > %i <.\n", i);
        break;
    case 4:
        printf("A opcao digitada foi > %i <.\n", i);
        break;
    case 5:
        printf("A opcao digitada foi > %i <.\n", i);
        break;
    case 6:
        printf("A opcao digitada foi > %i <.\n", i);
        break;
    case 7:
        printf("A opcao digitada foi > %i <.\n", i);
        break;
    case 8:
        printf("A opcao digitada foi > %i <.\n", i);
        break;
    case 9:
        printf("A opcao digitada foi > %i <.\n", i);
        break;
    default:
        printf("O numero > %i < nao e opcao.\n", i);
    }

    printf("\n================================\n");
    return 0;
}
