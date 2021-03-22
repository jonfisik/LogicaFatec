// Aula de lógica de programação - fatec itaquera - Jonatan Paschoal 08-03-2021
#include<stdio.h>

main()
{
	float medidaPe,
		medidaPolegada,
		medidaJarda,
		medidaMilha;
	printf("Digite uma medida em peh: ");
	scanf("%f", &medidaPe);
	
	medidaPolegada = (medidaPe/12);
	medidaJarda = (3*medidaPolegada);
	medidaMilha = (1760*medidaJarda);
	
	printf("Medidas - \n Polegadas >> %f\n Jarda >> %f\n Milha >> %f.", medidaPolegada, medidaJarda, medidaMilha);
}
