#include <stdio.h>

int main(){
	int a, b, x, c = 0;
	printf("Ingrese el coeficiente a: \n");
	scanf("%d", &a);
	printf("Ingrese el coeficiente b: \n");
	scanf("%d", &b);
	printf("La ecuacion seria %d x + %d = %d \n", a, b, c);
	float ax = a;
	float resultado = -b/ax;
	printf("El resultado seria x = %f", resultado);
	return 0;
}
