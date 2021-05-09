#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
#include <math.h> //biblioteca matemática
/*
 *Autor: Jonatan P. Paschoal
 *versao: 1.0.0
 *email: jonfisik@hotmail.com
 *status: Professor - fisica
 *data: 09/05/2021
 */
/*
 *Equação do 2º grau - ax²+bx+c=0
 *Condição de existência: 
 -Se a = 0, não é equação do segundo grau
 -Se delta < 0 não existe solução nos nº reais
 -Se delta = 0 há apenas uma solução nos nº reais
 -Se delta > 0 existem 2 solução nos nº reais
 
 */

// Area de declaração
// void usada em funcoes simples que nao retornam valores
void traco(void);
void tracoSimples(void);

float a, b,c, delta, x1, x2;
int resposta;
// rotina principal
int main(){
	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
	
	// A linha abaixo gera um laço finito
	do{
		system("cls");
		//traco();
		printf("Equação quadrática V1.0.0\n");
		traco();

		printf("\n");
		printf("A = ");
		scanf("%f", &a);
		
		printf("B = ");
		scanf("%f", &b);
		
		printf("C = ");
		scanf("%f", &c);
		
		printf("\nDada a equação %.1fx² + %.1fx + %.1f = 0\n", a, b, c);
		printf("\n");
		
		//Cálculo do delta -- potência(base,expoente)
		delta = pow(b,2) - (4 * a * c);
		printf("Valor de delta >> %.2f.\n", delta);
		system("pause");
		// Cálculo da raíz quadrada -- sqrt(valor)
		x1 = (-b + sqrt(delta))/(2*a); 
		x2 = (-b - sqrt(delta))/(2*a);
		
		if(a == 0){
			printf("\nA = %f, A equação não é equação do segundo grau.\n", a);
		}else{
			if(delta == 0){
				printf("\nRaízes, x1 = x2 = %.2f\n", x2);
			}else{
				if(delta > 0){
					printf("\nRaízes, x1 = %.2f -- x2 = %.2f\n", x1, x2);
				}else{
					printf("\nAs raízes são complexas.\n");
				}
			}
		}
		tracoSimples();
		printf("1 - Novo cálculo.\n");
		printf("2 - Sair.\n");
		printf("\nDigite a opção desejada: ");
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

// definição das funções
void traco(void){
	printf("=======================================\n");
}

void tracoSimples(void){
	printf("---------------------------------------\n");
}
