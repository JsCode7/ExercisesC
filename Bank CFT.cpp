#include <stdio.h>
main(){
	char name[100];
	int e, s, c;
	
	//Se inicia el programa
	printf("Bienvenido/a al simulador de CFT BANK \n");
	printf("----------------------- \n");
	printf("Ingrese su nombre para acceder al sistema: \n");
	scanf("%s", name);
	printf("----------------------- \n");
	printf("%s Ingresa tu edad: \n", name);
	scanf("%d", &e);
	
	//limitador edad
	if(e < 18){
		printf("Debes ser mayor de edad para solicitar credito \n");
		printf("Nos vemos \n");
	}
	else {
		printf("Ingresa tu sueldo para evaluacion: \n");
		scanf("%d", &s);
	}
	
	//Comparador de sueldos para crédito
	//Sueldo menor a $350.000 no tiene derecho a crédito.
	//Sueldo entre $350.000 y $500.000 tiene derecho a crédito hasta por $500.000
	//Sueldo entre $500.001 y $1.000.000 tiene derecho a crédito hasta por $2.000.000.
	
	if(s < 350000){
		printf("Por el momento no puede optar a credito \n");
		printf("Gracias por consultar, para mas informacion acercarse a sucursal. \n");
	}
	else if(s > 350000 && s < 500000 ){
		printf("Tiene un credito pre-aprobado de hasta $500.000 \n");
		printf("Gracias por consultar, para mas informacion acercarse a sucursal. \n");
	}
	else if(s > 500001 && s < 1000000){
		printf("Tiene un credito pre-aprobado de hasta $2.000.000 \n");
		printf("Gracias por consultar, para mas informacion acercarse a sucursal. \n");
	}
	else{
		printf("Si hubo un error o su sueldo es mayor a 1m, favor ir a la sucursal");
	}
}
