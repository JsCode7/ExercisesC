#include <stdio.h>
main()
{
	int num1, num2, num3, sum;
	
	printf("Ingresa 3 números enteros \n");
	
	scanf("%i %i %i", &num1, &num2, &num3);
	
	sum = (num1 + num2 + num3);
	
	printf("La suma de los números que que ingresaste es %d", sum);
	
	return 0;
}
