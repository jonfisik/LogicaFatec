/*
Autor: Jonatan P. Paschoal
versao: 1.0.0
email: jonfisik@hotmail.com
status: Professor - fisica
data: 13/09/2021
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int m, n;		/*determinam o intervalo da fun��o*/
	int x, y;		/*usados para o c�lculo do m�ximo*/
	int  valor;		/*guarda x*y - x*x + y */
	int Xmax, Ymax;	/*argumentos que maximizam a fun��o*/
	int Vmax;		/*Xmax*Ymax - Xmax*Xmax + Ymax */
	
	printf("Maximizo x*y - x*x + y, onde 0 <= x <= n e 0 <= y <= m. \n");
	
	/*leia os limites dos intervalo*/
	printf("Entre com n e m: ");
	scanf("%d %d", &n, &m);
	
	/*inicializa��es*/
	Xmax = Ymax = 0;
	Vmax = 0; /*Vmax = Xmax*Ymax - Xmax*Xmax + Ymax */
	
	/*Testa todos os poss�veis valores da fun��o*/
	for(x=0; x <= n; x++){
		for(y = 0; y <= m; y++){
			valor = x*y - x*x + y;
			if(valor > Vmax){
				Vmax = valor;
				Xmax = x;
				Ymax = y;
			}
		}
	}
	printf("Valor maximo da funcao = %d foi alcancado com x = %d e y = %d. \n", Vmax, Xmax, Ymax);
	
}
