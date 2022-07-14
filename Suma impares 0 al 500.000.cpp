#include <stdio.h>

main(){
	int n, i;
	float arr[500000], sum;
	printf("Ingrese hasta que número quiere sumar impares: ");
	scanf("%d",&n);
	
	for(i = 0; i <= n ; i++){
		if(i%2 != 0){
		arr[i] = i;
		sum = sum + i;
		printf("%d \n", i);
		}
	}
 		printf("esta es la suma %d \n", sum);
 	//4.- Suma enteros impares - Suma enteros impares de 0 a 500.000 e imprime la suma final.
 	//No da el resultado porque el numero es demasiado grande, con muchos digitos ya que es 62.500.250.000,25. 
 	// CREO QUE ES POR ESO, no estoy seguro.


}

