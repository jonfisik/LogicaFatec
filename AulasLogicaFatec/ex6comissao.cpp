// Aula de lógica de programação - fatec itaquera - Jonatan Paschoal 08-03-2021
#include<stdio.h>

main()
{
	float venda,
		salario,
		comissao,
		salarioFinal; //declarando variável
		
	printf("- Digite o valor do salario: ");
	scanf("%f", &salario);
	printf("- Digite o valor da venda: ");
	scanf("%f", &venda);
	
	printf("------------------------------------");
	printf("\n");
	
	comissao = (0.04*venda); // calculo da comissão
	salarioFinal = salario+comissao; // calculo do antecessor
	printf("Valor da comissao >> %f <<.",comissao);
	printf("\n");
	printf("O valor do salario eh >> %f <<.",salarioFinal);
}
