#include<stdio.h>

main(){
	float peso, excesso, multa;
	
	printf("----------------------------------------------\n");
	printf("Peso limite: 50 kg | Multa por excesso R$ 4,00\n");
	printf("----------------------------------------------\n");
	printf("Informe o peso \"PEIXE\": ");
	scanf("%f", &peso);
	
	if(peso>50){
		excesso = (peso - 50);
		multa = (4*excesso);
	}else{
		excesso = 0;
		multa =0;
	}
	printf("\n");
	printf("----------------------------------------------\n");
	printf("Excesso de peso >> %f kg<<\n", excesso);
	printf("Multa por peso >> R$ %f <<\n", multa);
	printf("----------------------------------------------\n");
	
}
