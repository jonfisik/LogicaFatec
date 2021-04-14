#include<stdio.h>
// Jonatan Paschoal - 14/04/2021 - Aprovação, media. Desvio condicional encadeado.

main(){
	float nota1, nota2, media;
	char nome[10];
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite sua primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite sua segunda nota: ");
	scanf("%f", &nota2);
	
	media = (nota1+nota2)/2;
	
	if(media >= 6){
		printf("%s, voce esta aprovado com media >> %0.2f <<.", nome,media);
	}else{
		if(media <= 3){
			printf("%s, voce esta reprovado com media >> %0.2f <<.", nome,media);
		}else{
			printf("%s, voce esta de exame com media >> %0.2f <<.", nome,media);
		}
	}
}
