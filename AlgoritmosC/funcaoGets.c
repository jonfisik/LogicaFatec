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

main(){
	char nome[40];
	printf("Digite seu nome: ");
	/*gets(vari�vel) L� da entrada padr�o (stdin) at� encontrar uma nova linha ou o fim de arquivo (EOF).
	A nova linha n�o � inclu�da na string lida. O caractere NULL ('\0') � automaticamente adicionado ao fim da string.*/
	gets(nome);
	system("cls");
	printf("Bem-vindo %s\n.", nome);
	system("pause");
}
