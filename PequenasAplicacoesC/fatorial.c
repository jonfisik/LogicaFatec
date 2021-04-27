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
    //A função getchar() retorna um valor, o caractere lido 
	//mais precisamente, o código inteiro ASCII correspondente ao caractere
	//com uma chamada da função getchar() só o primeiro caractere da sequência digitada é lida
	getchar();
    F = fatorial;

    for(;fatorial >= 1; fatorial--){
        //resposta = resposta * fatorial;
        resposta *= fatorial;
        
    }// end FOR

    printf("\nO Fatorial de %i é: %i", F, resposta);

    printf("\n======================================\n");
    return 0;
}
