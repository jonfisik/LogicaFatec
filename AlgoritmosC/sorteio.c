#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
#include <time.h>
/* Sorteio e advinhação
 * Autor: JPaschoal
 * versao: 1.0.0
 * email: jonfisik@hotmail.com
 * status: Professor - física
 * data: 18/05/2021
 */
// Função
void traco(void);
void tracoSimples(void);
//Declaração de variáveis
int x, num, sorteio, tentativas = 0;
char c;
//Principal
main(){
//setlocale(LC_ALL,"Portuguese");
	setlocale(LC_ALL,"Portuguese");
//Título	
	printf("\nAdivinhe o número V1.0.0\n");
	traco();
	srand(time(NULL));	
	//x = rand();
//A função rand() gera números aleatórios. % recebe o resto da divisão
	sorteio = rand() % 100;
	
	do{
		tentativas++;
		printf("\nTentativa número %d.", tentativas);
		printf("\nAdvinhe o número: ");
		scanf("%d", &num);
		
		if(num == sorteio){
			printf("\nNão acredito mano!!! Você acertou.\n");
			break;
		}
		if(num < sorteio){
				printf("\nErrooou!!! Tente um número MAIOR.\n");
			}else{
				printf("\nErrooou!!! Tente um número MENOR.\n");
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
// definição das funções
void traco(void){
	printf("=======================================\n");
}
void tracoSimples(void){
	printf("_______________________________________\n");
}

