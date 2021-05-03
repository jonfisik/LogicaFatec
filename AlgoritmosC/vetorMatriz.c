#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
/* Vetores
 * Autor: JPaschoal
 * versao: 1.0.0
 * email: jonfisik@hotmail.com
 * status: Professor - fisica
 * data: 03/05/2021
 */

// Area de declaração
void traco(void);
void tracoSimples(void);

// principal
int main(){
	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
	
	printf("\nVETORES & MATRIZES\n");
	traco();
	
	float nota1 = 8;
	float nota2 = 6;
	float nota3 = 9;
	float nota4 = 3;
	
	
	printf("Nota2: %.1f\n", nota2);
	tracoSimples();
	// exibindo contéudo da variável nota3 sem uso do array
	printf("Sem array\n");
	printf("Nota3: %.1f\n", nota3);
	tracoSimples();
	// Array de tamanho 4
	float notas[4]={8,6,9,3};
	printf("Com array\n");
	printf("Nota3: %.1f\n", notas[2]);
	tracoSimples();
	// a linha abaixo modifica o conteudo do array
	notas[1] = 7;
	printf("Nota modificada - posição [2].\n");
	printf("Nota2: %.1f\n", notas[1]);
	tracoSimples();
	// Array de duas dimensões
	// tipo nomeMatriz[linha][coluna] = {{conteúdo linha},{conteúdo coluna}
	float boletim[2][4] = {{8,6,7,9},{5,9,7,6}};
	printf("Array Multidimensional\n");
	printf("Nota: %.1f\n", boletim[1][0]);
	tracoSimples();
	system("pause");
	
	
	
}

// definição das funções
void traco(void){
	printf("==================================\n");
}

void tracoSimples(void){
	printf("__________________________________\n");
}
