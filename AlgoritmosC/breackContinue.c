/*
Autor: Jonatan P. Paschoal
email: jonfisik@hotmail.com
status: Professor - física
data: 25/04/2021
*/
#include <stdio.h>
#include <stdlib.h>

main(){
    int x = 0;
	printf("======\n");
    for(x; x <= 10; ++x){
        //Quando x == 2, o "laço" será interrompido
        if(x == 2){
            printf("-\n", x);
            continue;
        }
        //quando x == 8 o "looping" será finalizado
        if(x == 8){
            printf("-\n", x);
            break;
        }
    printf("%i\n", x);
    }
    printf("======\n");
    return 0;
}
