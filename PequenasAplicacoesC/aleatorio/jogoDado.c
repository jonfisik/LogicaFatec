#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Autor: Jonatan P. Paschoal
versao: 1.0.0
email: jonfisik@hotmail.com
status: Professor - fisica
data: 30/04/2021
*/

// Area de declaração
void traco(void);

int main(int argc, char *argv[]) {
	
	//setlocale(LC_ALL,"Portuguese");
    //setlocale(LC_ALL,"Portuguese");
	traco();
	printF("\tJogo do dado\n");
	traco();
	srand(time(NULL));
	printf("Face: %d\n", rand()%6+1);
	
	system("pause");
	
	
	return 0;
}

void traco(void){
	printf("=============================\n");
}

