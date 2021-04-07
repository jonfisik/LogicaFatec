#include<stdio.h>
#include<stdlib.h> // biblioteca padrão que controla processos e alocação de memoria etc.

main(){
	printf("=============================\n");
    printf("=======Calculadora1.0 =======\n");
    printf("=============================\n");
// variáveis
    float num1, num2, soma, sub, mult, div;
// comandos para enviar msn para a tela e receber os dados
    printf("Digite dois numeros: \n");
    scanf("%f %f", &num1, &num2);
// operações com as variáveis
    soma = num1+ num2;
    sub = num1 - num2;
    mult = num1*num2;
    div = num1/num2;
// imprimir os resultados
	printf("\n");
    printf("Soma %f + %f = %f \n", num1, num2, soma);
    printf("Subutracao %f - %f = %f \n", num1, num2, sub);
    printf("Produto %f x %f = %f \n", num1, num2, mult);
    printf("Divisao %f / %f = %f \n", num1, num2, div);

    printf("=============================\n");
    printf("=============================\n");
}
