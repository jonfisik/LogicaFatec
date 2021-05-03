#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // biblioteca - manipula caracter
#include<math.h> // biblioteca - matemática
//jonatan paschoal 07/04/2021

int main()
{
   char c;
    printf("Digite uma caracter em minusculo:");
    scanf("%c", &c);

	printf("==================================\n");
// condicional "se" com teste lógico no início
   if (c >= 'a'); 
     {
       printf("Segue a letra em maiuscula > %c <.\n", toupper(c)); // função que passa a letra para o maiúsculo
     }
    
    printf("==================================\n");
    
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%i", &num);
// condicional "se" com teste lógico no início -  teste par ou ímpar
    if (num%2==0){
        printf("O numero %i e par.\n", num);
    }
    else{
            printf("O numero %i e impar.\n", num);
        }
    printf("==================================\n");
}
