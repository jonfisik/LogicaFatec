 #include<stdio.h> // Biblioteca de entrada e saída de dados. Biblioteca padrão do C (expressão inglesa standard input-output header - "cabeçalho padrão de entrada/saída")

// corpo principal do programa
main(){
	int valor, imposto; // declaração da variávele do tipo de variável - int: inteira
	float ano; // declaração da variávele do tipo de variável - float: ponto flutuante
	
	printf("Digite o ano do carro: "); // comando de msg para o usuário - mostra uma msg na tela
	scanf("%i", &ano); // comando de recebimento de dados inserida pelo usuário
	
	printf("Digite o valor do carro R$ ");
	scanf("%f", &valor);
	
	// condicional "se" e "senão". Teste lógico feito no início.
	if(ano >= 1990)
	{
		// Bloco de comandos
		imposto = valor*(1.5/100);
		printf("Valor do imposto R$ %f a 1.5%.", imposto);
	}
	else
	{
		// Bloco de comandos
		imposto = valor*(1/100);
		printf("Valor do imposto R$ %f a 1%.", imposto);
	}
}


