#include<stdio.h>
// Jonatan Paschoal - 17/04/2021 - Calculo do peso ideal

main(){
	char sexo, sexoMaiusculo;
	float altura, peso;
	
	printf("============ Peso Ideal ============\n");
	printf("Digite [M/F] para o sexo: ");
	scanf("%c", &sexo);	
	sexoMaiusculo = toupper(sexo);
	
	if(sexoMaiusculo != 'F' && sexoMaiusculo != 'M'){
		printf("O valor >> %c << digitado eh invalido.\n", sexo);
		printf("Por favor, recomece.");
	}else{
		if(sexoMaiusculo == 'F'){
			printf("\nDigite sua altura em \"m\": ");
			scanf("%f", &altura);
			//peso feminino
			peso = (62.1*altura)-44.7;
		}else{
			printf("\nDigite sua altura em \"m\": ");
			scanf("%f", &altura);
			//peso masculino
			peso = (72.7*altura)-58;
		}
		printf("\nSeu peso ideal eh >> %0.2f kg <<.\n", peso);
	}
	printf("=====================================\n");
}
