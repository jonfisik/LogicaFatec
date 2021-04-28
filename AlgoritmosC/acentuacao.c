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
int main()
{
	//Modifica a cor do texto - system("color fundoLetra")
	system("color A");
	/*0 - preto		1 - azul	2 - verde	3 - verde água	4 - vermelho	5 - roxo
	  6 - amarelo	7 - branco	8 - cinza	9 - azul claro	A - verde claro	B - verde água-claro
	  C - vermelho claro	D - lilás	E - amarelo claro	F - branco brilhante*/
	
	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
    
	printf("======ACENTUAÇÃO======\n");
    printf("\ná, â, í, ç, ó, õ...\n");
    printf("\n======================\n");
    //espera a tecla ENTER ser pressionada
    system("pause");
    //Limpa a tela
    system("cls");
    printf("FUI...");
    printf("\n");
    return 0;
}


