#include <stdio.h>
main(){
	int i, n, sum=0;
	printf("Ingresa hasta que numero quieres sumar: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		sum = sum + i;
	}
	printf("la suma final es %d ", sum);
}

