#include <stdio.h>
#include <stdlib.h>
// Jonatan Pantoja Paschoal 16/04/2021
int main()
{
    int i;
    printf("================================\n");
    printf("\nDigite um valor entre 0  e 9: ");
    scanf("%i", &i);

    switch(i){
    case 0:
        printf("A opcao digitada foi: 0.\n");
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("A opcao digitada foi um num entre 1 e 5\n");
        break;

    case 6:
        printf("A opcao digitada foi: 6.\n");
        break;
    case 7:
        printf("A opcao digitada foi: 7.\n");
        break;
    case 8:
        printf("A opcao digitada foi: 8.\n");
        break;
    case 9:
        printf("A opcao digitada foi: 9.\n");
        break;
    default:
        printf("Opcao defaut.");
    }

    printf("\n================================\n");
    return 0;
}
