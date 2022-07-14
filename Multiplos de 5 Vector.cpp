#include <stdio.h>
//Múltiplos de cinco : imprime todos los múltiplos de 5 de 5 a 1,000
main(){
	int mult[200], i=0, x;
	
	for(i = 0; i <= 200; i++){
		x = 5*i;
		mult[i]= x;
		printf("%d\n", mult[i]);
	}
	
	printf("la posicion 17 del vector es: %d", mult[17]);
	
}
