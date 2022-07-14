#include <stdio.h>
//3.- Divisible 5, 10 - imprime enteros del 1 al 100. 
//Si es divisible por 5, imprima "Divisible por 5" en su lugar. 
//Si es divisible por 10, imprima "Divisible por 10".
main(){
	int a[100], div5, div10, i=0;
	
	for(i=0; i<101; i++){
		a[i]= i;
	}
	for(i=0; i<101; i++){
		if(a[i]%5 == 0){
			printf("%d es divisible x 5 \n", a[i]);
		}else {
			printf("%d \n", i);
		}
		if(a[i]%10 == 0){
			printf("y tambien es divisible x 10 \n");
		}
	}
}
