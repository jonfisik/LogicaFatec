 #include<stdio.h> // Biblioteca de entrada e saída de dados. Biblioteca padrão do C (expressão inglesa standard input-output header - "cabeçalho padrão de entrada/saída")
// Atribu��o e compara��o de dois valores reais
// corpo principal do programa
main(){
	float x, y; // declaração da variávele do tipo de variável - float: ponto flutuante
	
	printf("Digite o primeiro valor: ");
	scanf("%i", &x); 
	
	printf("Digite o segundo valor: ");
	scanf("%i", &y); 
	printf("\n");	
	
	if(x==y)
	{
		// Bloco de comandos
		printf("Sao iguais");
	}
	else
	{
		// Bloco de comandos
		printf("Nao sao iguais");
	}
}


