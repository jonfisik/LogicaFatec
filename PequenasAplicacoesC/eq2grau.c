#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
#include <math.h> //biblioteca matem�tica
/*
 *Autor: Jonatan P. Paschoal
 *versao: 1.0.0
 *email: jonfisik@hotmail.com
 *status: Professor - fisica
 *data: 09/05/2021
 */
/*
 *Equa��o do 2� grau - ax�+bx+c=0
 *Condi��o de exist�ncia: 
 -Se a = 0, n�o � equa��o do segundo grau
 -Se delta < 0 n�o existe solu��o nos n� reais
 -Se delta = 0 h� apenas uma solu��o nos n� reais
 -Se delta > 0 existem 2 solu��o nos n� reais
 
 */

// Area de declara��o
// void usada em funcoes simples que nao retornam valores
void traco(void);
void tracoSimples(void);

float a, b,c, delta, x1, x2;
int resposta;
// rotina principal
int main(){
	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
	
	// A linha abaixo gera um la�o finito
	do{
		system("cls");
		//traco();
		printf("Equa��o quadr�tica V1.0.0\n");
		traco();

		printf("\n");
		printf("A = ");
		scanf("%f", &a);
		
		printf("B = ");
		scanf("%f", &b);
		
		printf("C = ");
		scanf("%f", &c);
		
		printf("\nDada a equa��o %.1fx� + %.1fx + %.1f = 0\n", a, b, c);
		printf("\n");
		
		//C�lculo do delta -- pot�ncia(base,expoente)
		delta = pow(b,2) - (4 * a * c);
		printf("Valor de delta >> %.2f.\n", delta);
		system("pause");
		// C�lculo da ra�z quadrada -- sqrt(valor)
		x1 = (-b + sqrt(delta))/(2*a); 
		x2 = (-b - sqrt(delta))/(2*a);
		
		if(a == 0){
			printf("\nA = %f, A equa��o n�o � equa��o do segundo grau.\n", a);
		}else{
			if(delta == 0){
				printf("\nRa�zes, x1 = x2 = %.2f\n", x2);
			}else{
				if(delta > 0){
					printf("\nRa�zes, x1 = %.2f -- x2 = %.2f\n", x1, x2);
				}else{
					printf("\nAs ra�zes s�o complexas.\n");
				}
			}
		}
		tracoSimples();
		printf("1 - Novo c�lculo.\n");
		printf("2 - Sair.\n");
		printf("\nDigite a op��o desejada: ");
		scanf("%d", &resposta);
		if(resposta < 1 || resposta > 2){
			printf("\nOpcao incorreta!\n");
			printf("Finalizando programa!!!\n\n");
			break;
		}
		printf("\n");
		tracoSimples();	
	}while(resposta != 2);
	
	//tracoSimples();
	system("pause");
}

// defini��o das fun��es
void traco(void){
	printf("=======================================\n");
}

void tracoSimples(void){
	printf("---------------------------------------\n");
}
