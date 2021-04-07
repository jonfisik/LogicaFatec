#include<stdio.h>

main(){
	float caixa, quantidade, preco;
	float valorCompra, limite, valorPagar;
	
	
	printf("Qual o valor em caixa? R$ ");
	scanf("%f", &caixa);
	
	printf("Qual a quantidade? R$ ");
	scanf("%f", &quantidade);
	
	printf("Qual o preco? R$ ");
	scanf("%f", &preco);
	
	valorCompra = quantidade * preco;
	limite = caixa * 0.8;
	
	if(valorCompra > limite){
		valorPagar = valorCompra * 1.10;
		printf("Compra a prazo R$ %f.", valorPagar);
	}else{
		valorPagar = valorCompra * 0.95;
		printf("Compra a vista R$ %f.", valorPagar);
	}

}
