#include <stdio.h>
#include <stdlib.h>
/*
Autor: Jonatan P. Paschoal
versao: 1.0.0
email: jonfisik@hotmail.com
status: Professor - fisica
data: 27/04/2021
*/
int main()
{
    printf("===========OP. TERNARIA=========\n");
    printf("Digite uma letra entre A e G: ");
    char caractere = 0;
    scanf("%c", &caractere);
    int codigo = 0;

    switch(caractere){
        case 'A':
            codigo = 65;
            break;
        case 'B':
            codigo = 66;
            break;
        case 'C':
            codigo = 67;
            break;
        case 'D':
            codigo = 68;
            break;
        case 'E':
            codigo = 69;
            break;
        case 'F':
            codigo = 70;
            break;
        case 'G':
            codigo = 71;
            break;
        default:
            codigo = -1;

    }
	// operacao ternaria
    printf("\nO codigo eh: %i\n", codigo);
    printf("================================\n");

    switch(caractere){
    codigo = (caractere=='A') ? 65:
             (caractere=='B') ? 66:
             (caractere=='C') ? 67:
             (caractere=='D') ? 68:
             (caractere=='E') ? 69:
             (caractere=='F') ? 70:
             (caractere=='G') ? 71: -1;
    }
    printf("O codigo eh: %i\n", codigo);
    printf("================================\n");

    return 0;
}
