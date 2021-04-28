#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
/*
Autor: Jonatan P. Paschoal
versao: 1.0.0
email: jonfisik@hotmail.com
status: Professor - fisica
data: 27/04/2021
*/

int numero;

int main(){
	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
    
	printf("===========SISTEMAS===========\n");
    printf("\n");
	printf("1 - Windows\n");
    printf("2 - Linux\n");
    printf("\n");
    printf("Escolha a opção desejada >> ");
    scanf("%d", &numero);
        
    switch(numero){
    	case 1:
    		system("cls");
    		printf("Iniciando Windows...\n");
			printf("\n");
    		break;    	
    	case 2:
    		system("cls");
    		printf("Iniciando Linux...\n");
    		printf("\n");
    		break;
    		
    	default:
    		printf("\nOpção inválida.\n");
    		printf("==============================\n");
    	
	}
	system("pause");
	printf("\n");
   
    
}
