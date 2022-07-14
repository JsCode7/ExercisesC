#include <stdio.h>

int main(){
	int num1, num2, num3, resultado;
	printf("Ingrese 3 numeros enteros para multiplicarlos: \n");
	scanf("%d %d %d", &num1, &num2, &num3);
	resultado = (num1 * num2 * num3);
	printf("el resultado es: %d", resultado);
}
