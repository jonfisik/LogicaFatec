 #include<stdio.h>

main(){
	int valor, imposto;
	float ano;
	
	printf("Digite o ano do carro: ");
	scanf("%i", &ano);
	
	printf("Digite o valor do carro R$ ");
	scanf("%f", &valor);
	
	if(ano >= 1990)
	{
		imposto = valor*(1.5/100);
		printf("Valor do imposto R$ %f a 1.5%.", imposto);
	}
	else
	{
		imposto = valor*(1/100);
		printf("Valor do imposto R$ %f a 1%.", imposto);
	}
}


