#include <stdio.h>
#include <stdlib.h>
// Jonatan Paschoal - 08/04/2021. Condicional aninhado e operador l�gico AND
main(){
    int iJ, iI;
    iJ = 17;
    iI = 60;

    int idade = 60;

    printf("\t ======================== ======================== \n");
    printf("\t Digite sua idade: ");
        scanf("%i", &idade);

    if(idade <= iJ){
        printf("\t Sua idade eh de um jovem: \n");
    }else{
        if(idade >= iI){
            printf("\t Sua idade e de uma pessoa idosa.\n");
        }else{
        	// && operador l�gico AND (e), || Operador l�gico OR (ou)
            if((idade > iJ) && (idade < iI)){
            printf("\t Sua idade e de uma pessoa de meia idade.\n");
            }
        }
    }
    printf("\t ======================== ======================== \n");
}
