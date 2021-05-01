#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

