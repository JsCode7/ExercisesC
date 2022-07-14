#include <stdio.h>

int main(){
	int i=0, x;
	float nota, ponderacion, porcentaje, pf, promedio;
	
	printf("Ingresa cuantas notas quieres promediar: ");
	scanf("%d", &x);
	
	while(i != x){
		//Conversion de entero a porcentaje
		printf("Ingresa el porcentaje de la nota: ");
		scanf("%f", &promedio);
		porcentaje = (promedio * 0.01);
		
			//Asegurarse que el porcentaje no sea mayor a 100
			if(promedio > 100){
					printf("\n No puede ser mas del 100.");
					return 0;
				}

		
		//Ingreso de nota
		printf("Ingresa la nota: ");
		scanf("%f", &nota);
			//Asegurarse que la nota no sea mayor a 7
			if(nota > 70){
				printf("Solo se admite hasta el 70");
				return 0;
			}
			
		//Conversion de nota a ponderacion
		ponderacion = (nota * porcentaje);
		printf("La ponderacion de la nota es: %.2f \n", ponderacion);
		
		// Promedio final = acumulador de ponderaciones anteriores
		pf = pf + ponderacion;
		
			//Asegurarse que el Promedio Final no sea mayor a 7
			if(pf > 70){
				printf("Ingresaste mal el porcentaje o una nota, por favor reinicia el programa.");
				return 0;
			}
		i++;	
	}
	
	printf("Tu promedio final es %.2f", pf);
	return 0;
}
