#include <stdio.h>

int main(){
	int f;
	float morning[4], after[4], mor, aft; 
	
	printf("Sueldos de empleados del turno de la ma�ana: \n");
	for(f=0; f<4; f++){
		printf("Ingresa el sueldo del trabajador ");
		scanf("%f", &morning[f]);
	}
	
	printf("Sueldos de empleados del turno de la tarde: \n");
	for(f=0; f<4; f++){
		printf("Ingresa el sueldo del trabajador ");
		scanf("%f", &after[f]);
	}
	
	mor=0;
	aft=0;
	for(f=0; f<3; f++){
		mor=mor+morning[f];
		aft=aft+after[f];
	}
	
	printf("Total de gasto turno ma�ana: ");
	printf("%0.2f \n", mor);
	printf("Total de gasto turno tarde: ");
	printf("%0.2f \n", aft);
	return 0;
}
