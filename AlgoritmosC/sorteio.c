#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
#include <time.h>
/* Sorteio e advinha��o
 * Autor: JPaschoal
 * versao: 1.0.0
 * email: jonfisik@hotmail.com
 * status: Professor - f�sica
 * data: 18/05/2021
 */
// Fun��o
void traco(void);
void tracoSimples(void);
//Declara��o de vari�veis
int x, num, sorteio, tentativas = 0;
char c;
//Principal
main(){
//setlocale(LC_ALL,"Portuguese");
	setlocale(LC_ALL,"Portuguese");
//T�tulo	
	printf("\nAdivinhe o n�mero V1.0.0\n");
	traco();
	srand(time(NULL));	
	//x = rand();
//A fun��o rand() gera n�meros aleat�rios. % recebe o resto da divis�o
	sorteio = rand() % 100;
	
	do{
		tentativas++;
		printf("\nTentativa n�mero %d.", tentativas);
		printf("\nAdvinhe o n�mero: ");
		scanf("%d", &num);
		
		if(num == sorteio){
			printf("\nN�o acredito mano!!! Voc� acertou.\n");
			break;
		}
		if(num < sorteio){
				printf("\nErrooou!!! Tente um n�mero MAIOR.\n");
			}else{
				printf("\nErrooou!!! Tente um n�mero MENOR.\n");
		}
		
		
		printf("Tentar de novo? [S/N] - ");
	//Limpa o buffer do teclado
		fflush(stdin);
		scanf("%c", &c); 
		if(c == 'n' || c == 'N'){
			printf("\nSaindo do jogo...");
		}
		
	}while(c == 's' || c == 'S');
		
	printf("\n");
	tracoSimples();
	system("pause");
}
// defini��o das fun��es
void traco(void){
	printf("=======================================\n");
}
void tracoSimples(void){
	printf("_______________________________________\n");
}

