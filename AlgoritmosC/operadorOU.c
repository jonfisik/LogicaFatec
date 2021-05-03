#include <stdio.h>
#include <stdlib.h>
// Jonatan Paschoal - 08/04/2021. Operador logico OU e relacionais
main(){
    int x = 10;
    int cond = 0;
    
    /* (true) || (false) - 1
       (false) || (true) - 1
       (true) || (true) - 1
       (false) || (false) - 0
	*/

    cond = ((x==10)||(x<1));
    printf("%i", cond);
    
    cond = ((x==0)||(x!=1000));
    printf("%i", cond);
    
    cond = ((x==10)||(x!=0));
    printf("%i", cond);
    
    cond = ((x!=10)||(x=0));
    printf("%i", cond);
 
}
