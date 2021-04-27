#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Autor: Jonatan P. Paschoal
versao: 1.0.0
email: jonfisik@hotmail.com
status: Professor - fisica
data: 27/04/2021
*/
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int fatorial;
    int resposta = 1;
    int F;
    printf("\n==============FATORIAL================\n");

    printf("Digite o fatorial a ser calculado: ");
    scanf("%i", &fatorial);
    //A fun��o getchar() retorna um valor, o caractere lido 
	//mais precisamente, o c�digo inteiro ASCII correspondente ao caractere
	//com uma chamada da fun��o getchar() s� o primeiro caractere da sequ�ncia digitada � lida
	getchar();
    F = fatorial;

    for(;fatorial >= 1; fatorial--){
        //resposta = resposta * fatorial;
        resposta *= fatorial;
        
    }// end FOR

    printf("\nO Fatorial de %i �: %i", F, resposta);

    printf("\n======================================\n");
    return 0;
}
