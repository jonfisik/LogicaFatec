#include <stdio.h>
#include <stdlib.h>
//Jonatan Paschoal 16/04/2021
int main()
{
    int i1 = 1;
    printf("========== ==========\n");
    printf("\n>>> %i \n", i1);
    ++i1;
    printf(">>> %i \n", i1);
    i1++;
    printf(">>> %i \n", i1);
    printf("\n========== ==========\n");

    //int i1 = 1;
    printf("\n========== ==========\n");
    printf("\n>>> %i \n", i1);
    //++i1;
    printf(">>> %i \n", ++i1);
    //i1++;
    printf(">>> %i \n", i1++);
    printf("\n========== ==========\n");

    int i2 = 5;
    printf("\n========== ==========\n");
    printf("\n>>> %i \n", i2);
    --i2;
    printf(">>> %i \n", i2);
    i2--;
    printf(">>> %i \n", i2);
    printf("\n========== ==========\n");

    //int i2 = 5;
    printf("\n========== ==========\n");
    printf("\n>>> %i \n", i2);
    //--i2;
    printf(">>> %i \n", --i2);
    //i2--;
    printf(">>> %i \n", i2--);
    printf("\n========== ==========\n");
    return 0;
    /*
    1) Incremento\
       ---------------> Pré ou Pós
    2) Decremento/

    pré -> o valor será incrementado/decrementado na instrução
    que a variável estiver contida.

    pós -> o valor será incrementado/decrementado na próxima
    instrução.
    */
}
