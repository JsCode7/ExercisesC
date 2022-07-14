#include <stdio.h>

main(){
	int n, i, sum;
	printf("Ingrese hasta que número quiere sumar impares: \n ");
	scanf("%i \n", &n);
	for(i = 0; i <= n ; i++){
		if(i%2 != 0){
		sum = sum + i;
		}
	}
 	printf("esta es la suma %d\n", sum);
}
