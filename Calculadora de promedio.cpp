//Calculadora de promedio 1er semestre x ramo
#include <stdio.h>
int main(){
	int i=1, x, y;
	float a,b,c,d,e,xa,xb,xc,xd,xe,promn,promf;
	
	printf("Cuantos ramos deseas calcular? \n");
	scanf("%d", &y);
	
while(i <= y){
	printf("Promedio nro %d \n", i);
	printf("-------------------------------------------- \n");
	printf("Seleccione el numero del ramo para ingresar las notas y calcular el promedio: \n");
	printf("1.Introduccion a Servicios TI \n");
	printf("2.Programacion \n");
	printf("3.Analisis y Diseño orientado a objetos \n");
	printf("4.Sistemas de información \n");
	printf("5.Matemáticas \n");
	printf("6.Comunicacion \n");
	printf("7.Desarrollo personal \n");
	printf("8.Usos de TIC \n");
	printf("-------------------------------------------- \n");
	scanf("%d", &x);
	printf("-------------------------------------------- \n");

	//Calculadora de promedio con % de ramo Servicios TI
	if(x == 1){
		printf("Ramo seleccionado: Servicios TI \n");
		printf("Ingrese la primera nota de Servicios TI \n");
		scanf("%f", &a);
		xa = (0.2*a);
		printf("Ingresa la segunda nota \n");
		scanf("%f", &b);
		xb = (0.2*b);
		printf("Ingresa la tercera nota \n");
		scanf("%f", &c);
		xc = (0.3*c);
		printf("Ingresa la cuarta nota \n");
		scanf("%f", &d);
		xd = (0.3*d);
		/*printf("Ingresa la nota del examen \n");
		scanf("%f", &e);
		xe = (0.3*e);*/
		
	//promedio final de Introducción Servicios TI
		promn = (xa + xb + xc + xd);
		//promf = xe + promn;
		printf("El promedio del ramo es: %.3f \n", promn);
		printf("---------------------------------------- \n");

	}
	//Calculadora de promedio con % de ramo Programación
	else if(x == 2){
		printf("Ramo seleccionado: Programacion \n");
		printf("Ingrese la primera nota de Programacion \n");
		scanf("%f", &a);
		xa = (0.2*a);
		printf("Ingresa la segunda nota \n");
		scanf("%f", &b);
		xb = (0.2*b);
		printf("Ingresa la tercera nota \n");
		scanf("%f", &c);
		xc = (0.3*c);
		printf("Ingresa la cuarta nota \n");
		scanf("%f", &d);
		xd = (0.3*d);
		printf("Ingresa la nota del examen \n");
		scanf("%f", &e);
		xe = (0.3*e);
		
	//promedio final de programación
		promn = ((xa + xb + xc + xd)*0.7);
		promf = xe + promn;
		printf("El promedio del ramo es: %.3f \n", promf);
		printf("---------------------------------------- \n");
	}
	//Calculadora de promedio con % de ramo AOO
	else if(x == 3){
		printf("Ramo seleccionado: AOO \n");
		printf("Ingrese la primera nota de AOO \n");
		scanf("%f", &a);
		xa = (0.2*a);
		printf("Ingresa la segunda nota \n");
		scanf("%f", &b);
		xb = (0.4*b);
		printf("Ingresa la tercera nota \n");
		scanf("%f", &c);
		xc = (0.4*c);
		printf("Ingresa la nota del examen \n");
		scanf("%f", &e);
		xe = (0.3*e);
		
	//promedio final de AOO
		promn = ((xa + xb + xc + xd)*0.7);
		promf = xe + promn;
		printf("El promedio del ramo es: %.3f \n", promf);
		printf("---------------------------------------- \n");
	}
	//Calculadora de promedio con % de ramo Sistemas de Información
	else if(x == 4){
		printf("Ramo seleccionado: Sistemas de informacion \n");
		printf("Ingrese la primera nota de SI \n");
		scanf("%f", &a);
		xa = (0.2*a);
		printf("Ingresa la segunda nota \n");
		scanf("%f", &b);
		xb = (0.4*b);
		printf("Ingresa la tercera nota \n");
		scanf("%f", &c);
		xc = (0.4*c);
		printf("Ingresa la nota del examen \n");
		scanf("%f", &e);
		xe = (0.3*e);
		
	//promedio final de Sistemas de información
		promn = ((xa + xb + xc + xd)*0.7);
		promf = xe + promn;
		printf("El promedio del ramo es: %.3f \n", promf);
		printf("---------------------------------------- \n");
	}
	//Calculadora de promedio con % de ramo Matemáticas
	else if(x == 5){
		printf("Ramo seleccionado: Matematicas \n");
		printf("Ingrese la primera nota de Matematicas \n");
		scanf("%f", &a);
		xa = (0.2*a);
		printf("Ingresa la segunda nota \n");
		scanf("%f", &b);
		xb = (0.25*b);
		printf("Ingresa la tercera nota \n");
		scanf("%f", &c);
		xc = (0.25*c);
		printf("Ingresa la cuarta nota \n");
		scanf("%f", &d);
		xd = (0.3*d);
		//printf("Ingresa la nota del examen \n");
		//scanf("%f", &e);
		//xe = (0.3*e);
		
		
	//promedio final de Matemáticas
		promn = (xa + xb + xc + xd);
		//promf = xe + promn;
		printf("El promedio del ramo es: %.3f \n", promn);
		printf("---------------------------------------- \n");
	}
	//Calculadora de promedio con % de ramo Comunicación
	else if(x == 6){
		printf("Ramo seleccionado: Comunicacion \n");
		printf("Ingrese la primera nota de Comunicacion \n");
		scanf("%f", &a);
		xa = (0.2*a);
		printf("Ingresa la segunda nota \n");
		scanf("%f", &b);
		xb = (0.3*b);
		printf("Ingresa la tercera nota \n");
		scanf("%f", &c);
		xc = (0.3*c);
		printf("Ingresa la cuarta nota \n");
		scanf("%f", &d);
		xd = (0.2*d);
		printf("Ingresa la nota del examen \n");
		scanf("%f", &e);
		xe = (0.3*e);
	
	//promedio final de Comunicacion
		promn = ((xa + xb + xc + xd)*0.7);
		promf = xe + promn;
		printf("El promedio del ramo es: %.3f \n", promf);
		printf("---------------------------------------- \n");
	}
	//Calculadora de promedio con % de ramo Desarrollo Personal
	else if(x == 7){
		printf("Ramo seleccionado: Desarrollo Personal \n");
		printf("Ingrese la primera nota de DP \n");
		scanf("%f", &a);
		xa = (0.15*a);
		printf("Ingresa la segunda nota \n");
		scanf("%f", &b);
		xb = (0.4*b);
		printf("Ingresa la tercera nota \n");
		scanf("%f", &c);
		xc = (0.45*c);
		printf("Ingresa la nota del examen \n");
		scanf("%f", &e);
		xe = (0.3*e);
		
	//promedio final de Desarrollo Personal
		promn = ((xa + xb + xc + xd)*0.7);
		promf = xe + promn;
		printf("El promedio del ramo es: %.3f \n", promf);
		printf("---------------------------------------- \n");
	}
	//Calculadora de promedio con % de ramo Usos de TIC
	else if(x == 7){
		printf("Ramo seleccionado: Usos de TIC \n");
		printf("Ingrese la primera nota de Usos de TI \n");
		scanf("%f", &a);
		xa = (0.2*a);
		printf("Ingresa la segunda nota \n");
		scanf("%f", &b);
		xb = (0.2*b);
		printf("Ingresa la tercera nota \n");
		scanf("%f", &c);
		xc = (0.3*c);
		printf("Ingresa la cuarta nota \n");
		scanf("%f", &d);
		xd = (0.3*d);
		printf("Ingresa la nota del examen \n");
		scanf("%f", &e);
		xe = (0.3*e);
		
	//promedio final de Usos de TIC
		promn = ((xa + xb + xc + xd)*0.7);
		promf = xe + promn;
		printf("El promedio del ramo es: %.3f \n", promf);
		printf("---------------------------------------- \n");
	}
	else {
		printf("--------------------------------------\n");
		printf("Ese numero no esta asignado a un ramo! \n");
		printf("--------------------------------------\n");
	}
	i++;
	}
}
