#include <stdio.h>
#include <stdlib.h>

main(){
        float nota1, nota2, nota3, nota4, media;
        nota1=nota2=nota3=nota4=media = 0;
        printf("\t======== Media 1.0 =========\n\n");

        printf("\t Digite sua [1] nota: ", nota1);
            scanf("%f", &nota1);
        printf("\t Digite sua [2] nota: ", nota2);
            scanf("%f", &nota2);
        printf("\t Digite sua [3] nota: ", nota3);
            scanf("%f", &nota3);
        printf("\t Digite sua [4] nota: ", nota4);
            scanf("%f", &nota4);
        printf("\n");

        media = (nota1+nota2+nota3+nota4)/4;
        printf("\t Sua media foi de: %f.\n", media);

        if(media >= 7){
            printf("\t Voce foi aprovado.\n");
        }else{
            printf("\t Voce foi reprovado.\n");
        }
        
		printf("\t Media 7, para aprovacao.\n");
        printf("\t===========================\n\n");
}
