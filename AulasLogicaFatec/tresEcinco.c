#include<stdio.h>
main(){
	int i;
	for(i=1; i<100; i++){
		if(i % 3 == 0 && i % 5 == 0){
			printf("%i\n", i);
		}
	}
}
