#include <stdio.h>

main(){
	//B�sico : imprime todos los enteros del 0 al 150.
	int x[150], i;
	for(i=0; i <= 150; i++){
		x[i]= i;
		printf("%d \n", x[i]);
	}
	
	printf("%d", x[120]); //ejemplo de que el 4 se almacen� en el lugar 5 del vector contando desde 0 al 4.
}
