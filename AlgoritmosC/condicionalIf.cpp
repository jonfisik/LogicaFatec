#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // biblioteca - manipula caracter
#include<math.h> // biblioteca - matem�tica
//jonatan paschoal 07/04/2021

int main()
{
   char c;
    printf("Digite uma caracter em minusculo:");
    scanf("%c", &c);

	printf("==================================\n");
// condicional "se" com teste l�gico no in�cio
   if (c >= 'a'); 
     {
       printf("Segue a letra em maiuscula > %c <.\n", toupper(c)); // fun��o que passa a letra para o mai�sculo
     }
    
    printf("==================================\n");
    
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%i", &num);
// condicional "se" com teste l�gico no in�cio -  teste par ou �mpar
    if (num%2==0){
        printf("O numero %i e par.\n", num);
    }
    else{
            printf("O numero %i e impar.\n", num);
        }
    printf("==================================\n");
}
