#include <stdio.h>
//5.- Cuenta regresiva por cuatro : imprime números positivos del 2021 al 0, restando 4 en cada iteración.
main(){
	int n, i, cont = 0, a[2021]; //puse 2021 porque no sé cuantos numeros serían en el vector, pero obviamente son menos porque van restado 4;
	
	for(i=2021; i >= 0; i-=4){
		printf("%d \n", i);
		a[cont] = i;
		cont++;
	}
	printf("El numero en la posicion 100 seria: %d \n", a[100]); 
	return 0;
}
