#include <stdio.h>

// Preferi hacerlo con Float por el tema de los decimales,
// ya que hay divisiones que dan numeros pequeños o fracciones. 
int main(){
	float num1, num2, resultado;
	printf("Ingrese 2 numeros distintos de 0 para dividirlos: \n");
	scanf("%f %f", &num1, &num2);
	resultado = (num1 / num2);
	printf("El resultado de la division de %f entre %f es: %f", num1, num2, resultado);
	return 0;
}
