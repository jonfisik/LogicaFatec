#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
#include <time.h>
/*
 *Autor: Jonatan P. Paschoal
 *versao: 1.0.0
 *email: jonfisik@hotmail.com
 *status: Professor - fisica
 *data: 02/04/2021
*/

// Area de declara��o
void traco(void);

// principal
int main(){
	// Vari�veis de apoio aa l�gica
	int jogador, computador;
	
	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
	traco();
	printf("\t   __________JoKenPow__________\n");
	printf("\t\t   Ves�o 1.0.0\n");
	traco();
	//L�gica jogador
	printf("\t\n");
	printf("\t[1] Pedra\n");
	printf("\t[2] Papel\n");
	printf("\t[3] Tesoura\n");
	printf("\t\n");
	printf("\tDigite a op��o desejada: ");
	scanf("%d", &jogador);
	printf("\t   _____________________________\n");
	printf("\n");
	
	switch(jogador){
		case 1:
			printf("\tJogador escolheu \"pedra\".\n");
			break;
		
		case 2:
			printf("\tJogador escolheu \"papel\".\n");
			break;
		
		case 3:
			printf("\tJogador escolheu \"tesoura\".\n");
			break;
		default:
			printf("Op��o inv�lida.");
	}
	printf("\n");
	//L�gica do computador
	srand(time(NULL));
	// computador receberar valor aleat�rio
	computador = ("%d", rand()%3+1);
	
	switch(computador){
		case 1:
			printf("\tComputador escolheu \"pedra\".\n");
			break;
		
		case 2:
			printf("\tComputador escolheu \"papel\".\n");
			break;
		
		case 3:
			printf("\tComputador escolheu \"tesoura\".\n");
			break;
	}
	
	//L�gica determinar vencedor
	if(jogador == computador){
		printf("\n\tEmpate\n");
	}else if((jogador==1 && computador==3) || (jogador==2 && computador==1) || (jogador==3 && computador==2)){
		printf("\n\tJogador venceu!!!!\n");
	}else{
		printf("\n\tComputador venceu.\n");
	}
	printf("\t   _____________________________\n");
	system("pause");
}

// defini��o das fun��es
void traco(void){
	printf("\t==================================\n");
}
