#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    float num1, num2, resultado;
    char op = '0';

    printf("===========================\n\n");
    do{
       num1=num2=resultado = 0;
       printf("\n (1) somar.\n");
       printf(" (2) subtrair.\n");
       printf(" (3) multiplicar.\n");
       printf(" (4) dividir.\n");
       printf(" (0) Sair do programa.\n\n");

       printf("\n Informe a operacao. \n");
       printf("\t>>> ");
       op = getche(); // não precisa apertar o ENTER
       printf("\n");

       if (op !='0'){
        printf("Digite o primeiro numero:\n\t>>> ");
            scanf("%f", &num1);
        printf("Digite o segundo numero:\n\t>>> ");
            scanf("%f", &num2);
            if(op == '1'){
                resultado = num1 + num2;
                printf("O resultado e: \n\t>>> %0.2f\n", resultado);
                printf("\nPressione uma tecla para uma nova operacao.\n");
                getch();
            }else{
                if(op == '2'){
                    resultado = num1 - num2;
                    printf("O resultado e: \n\t>>> %0.2f\n", resultado);
                    printf("\nPressione uma tecla para uma nova operacao.\n");
                    getch();
                }else{
                    if (op =='3'){
                        resultado = num1 * num2;
                        printf("O resultado e: \n\t>>> %0.2f\n", resultado);
                        printf("\nPressione uma tecla para uma nova operacao.\n");
                        getch();
                    }else{
                        if (op == '4'){
                            resultado = num1/num2;
                            printf("O resultado eh: \n\t>>> %0.2f\n", resultado);
                            printf("\nPressione uma tecla para uma nova operacao.\n");
                            getch();
                        }
                    }
                }
            }
        }
        system("cls"); // limpa a tela

    }while( op != '0');
    printf("=====================\n");
    printf("===FIM DO PROGRAMA===\n");
    printf("=====================\n");
    getch();
    return 0;
}
