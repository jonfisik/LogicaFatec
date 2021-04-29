#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca de idiomas
/*
Autor: Jonatan P. Paschoal
versao: 1.0.0
email: jonfisik@hotmail.com
status: Professor - fisica
data: 28/04/2021
*/

// Area de declaração
// void usada em funcoes simples que nao retornam valores
void traco(void);
void tracoSimples(void);

//funcao soma
float somar(float num1, float num2){
	return num1 + num2;
}
//funcao subtrair
float subtrair(float num1, float num2){
	return num1 - num2;
}
//funcao multiplicar
float multiplicar(float num1, float num2){
	return num1 * num2;
}
//funcao dividir
float dividir(float num1, float num2){
	return num1 / num2;
}
//funcao porecentagem
float porcentagem(float num1, float num2){
	return (num1 * num2)/100;
}

// rotina principal
int main(){
	//setlocale(LC_ALL,"Portuguese");
    setlocale(LC_ALL,"Portuguese");
	traco();
	printf("\tCalculadora com função V1.0.0\n");
	traco();
	int opcao;
	float num1, num2, resultado;
	
	printf("Digite o valor do primeiro número: ");
	scanf("%f", &num1);
	
	printf("Digite o valor do segundo número: ");
	scanf("%f", &num2);
	
	tracoSimples();
	//menu
	printf("[1] SOMAR\n");
	printf("[2] SUBTRAIR\n");
	printf("[3] MULTIPLICAR\n");
	printf("[4] DIVIDIR\n");
	printf("[5] CALCULAR PORCENTAGEM\n");
	printf("\n");
	printf("Digite a opção desejada: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1: 
			resultado = somar(num1, num2);
			break;
		case 2: 
			resultado = subtrair(num1, num2);
			break;
		case 3: 
			resultado = multiplicar(num1, num2);
			break;
		case 4:
			if(num2 == 0){
				printf("Não é possível dividir por zero!!!\n");
			}else{
				resultado = dividir(num1, num2);
			} 
			
			break;
		case 5: 
			resultado = porcentagem(num1, num2);
			break;
		default:
			printf("Opção inválida...");
			break;
	}
	tracoSimples();
	printf("Resultado >>> %0.2f.\n", resultado);
	tracoSimples();
	printf("\n");
	system("pause");
}

// definição das funções
void traco(void){
	printf("===============================================\n");
}

void tracoSimples(void){
	printf("------------------------------------------------\n");
}
