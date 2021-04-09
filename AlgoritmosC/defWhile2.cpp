#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    int valDigitado = 0;
    printf("\t============== ============== ==============\n");
    printf("\t Informe a quantidade de repeticao X: ");
        scanf("%i", &valDigitado);

    while(x < valDigitado){
        printf("\t %i \n", x * 10);
        x = x + 1;
    }

    printf("\t============== ============== ==============\n");
    return 0;
}
