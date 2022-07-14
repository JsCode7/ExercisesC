#include <stdio.h>
main(){
	int a ,b ,c ,menor, medio, mayor;
	printf("Ingresa 3 numeros para ordenarlos de manera ascendente (presiona enter para ingresar cada uno) \n");
	scanf("%d %d %d", &a, &b, &c);
	if(a<=b && a<=c){
		if(b<=c){
			menor = a;
			medio = b;
			mayor = c; 
		}else{
			menor = a;
			medio = c;
			mayor = b;
		}
	}
	if(b<=a && b<=c){
		if(a<=c){
			menor = b;
			medio = a;
			mayor = c; 
		}else{
			menor = b;
			medio = c;
			mayor = a;
		}
	}if(c<=b && c<=a){
		if(b<=a){
			menor = c;
			medio = b;
			mayor = a; 
		}else{
			menor = c;
			medio = a;
			mayor = b;
		}
	}
	printf("El orden seria %d %d %d ", menor, medio, mayor);
	
}
