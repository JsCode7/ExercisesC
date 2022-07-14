//Programa para ecuación de segundo grado o cuadrática
#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c, n;
	float x, xa, xb;
	
	printf("Ingrese el valor a distinto de 0, de la ecuacion ax^2 + bx + c = 0 \n");
	scanf("%i", &a);
	//a que sea distinto de 0
	if(a == 0){
		printf("Ingresa un valor distinto de 0 para a: \n");
		scanf("%i, &a");
	}
	printf("Ingrese el valor b de la ecuacion \n");
	scanf("%i", &b);
	printf("Ingrese el valor c de la ecuacion \n");
	scanf("%i", &c);
	printf("La ecuacion de segundo grado seria: %ix^2 + %ix + %i = 0 \n", a, b, c);
	
	//n es el discriminante
	n = b*b-(4*a*c);
	//Operacion Unica solucion
	x = -b/2*a;
	//Operacion de 2 soluciones
	xa= (-b + sqrt(n))/2*a;
	xb= (-b - sqrt(n))/2*a;
	
	//Se evalua el discriminante para dar una respuesta
	if(n<0){
		printf("No tiene solucion en los reales");
	}
	else if(n==0){
		printf("La unica solucion es %f", x);
	}
	else if(n>0){
		printf("La primera solucion es %f \n", xa);
		printf("La segunda solucion es %f", xb);
	}
	
	return 0;
}
