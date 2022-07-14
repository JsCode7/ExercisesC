#include <stdio.h>

int main(){
	int i;
	float vector[8], sum, sum2, mayores1, mayores2;
	
	for(i=0; i < 8; i++){
		printf("Ingresa los elementos del vector: ");
		scanf("%f", &vector[i]);
		//Suma mayores a 36
		if(vector[i]>36){
		sum2 = sum2 + vector[i]; 
		}
	}
	//Elementos acumulados
	sum=0;
	for(i=0; i < 8; i++){
		sum = sum + vector[i];
	}
	//Mayores de 50
		if(vector[i]>50){
		mayores2++;	
		}
	printf("La suma de los elementos es: %f \n", sum);
	printf("Los suma de elementos mayores a 36 es: %f \n", sum2);
	printf("Los elementos mayores a 50 son: %f ", mayores2);
	
	return 0;
}
